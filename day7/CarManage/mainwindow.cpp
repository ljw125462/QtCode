#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QSqlDatabase>
#include<QSqlError>
#include<QMessageBox>
#include<QSqlQueryModel>
#include<QSqlQuery>
#include"domxml.h"
#include<QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //开始 车辆管理页面
    on_actionCar_triggered();

    //打开数据库
    connectDB();

    initData();

    DomXML::createXML("../demo.xml");

    QStringList list;
    list << "二汽神龙" << "毕加索" << "39" << "1" << "39";

    DomXML::appendXML("../demo.xml",list);

    QStringList factorylist;
    QStringList brandlist;
    QStringList pricelist;
    QStringList numlist;
    QStringList totallist;

    DomXML::readXML("../demo.xml",factorylist,brandlist,pricelist,numlist,totallist);
    for (int i =0;i<factorylist.size();i++) {
        QString str = QString("&1:%2:卖出了%3,单价:%4,总价:%5")
                .arg(factorylist.at(i))
                .arg(brandlist.at(i))
                .arg(numlist.at(i))
                .arg(pricelist.at(i))
                .arg(totallist.at(i));
        qDebug() <<str.toUtf8().data();
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::connectDB()
{
    //添加数据库
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("root");
    db.setDatabaseName("car");

    //打开数据库
    if(!db.open())
    {
        QMessageBox::warning(this,"数据库打开失败！",db.lastError().text());
        return;
    }
}

//初始化数据
void MainWindow::initData()
{
    QSqlQueryModel *queryModel = new QSqlQueryModel(this);//新建模型
    queryModel->setQuery("select name from factory");//sql语句
    ui->comboBoxFactory->setModel(queryModel);
    ui->labelLast->setText("0");//剩余数量

    ui->lineEditTotal->setEnabled(false);//金额

}

//车辆管理菜单
void MainWindow::on_actionCar_triggered()
{

    //切换到车辆管理页面
    ui->stackedWidget->setCurrentWidget(ui->car);
    ui->label->setText("车辆管理");
}

//销售统计菜单
void MainWindow::on_actionCalc_triggered()
{
    //切换到销售统计页面
    ui->stackedWidget->setCurrentWidget(ui->calc);
    ui->label->setText("销售统计");
}

void MainWindow::on_comboBoxFactory_currentIndexChanged(const QString &arg1)
{
    if(arg1 == "请选择厂家")
    {
        //清空
        ui->comboBoxBrand->clear();//品牌下拉框清空
        ui->lineEditPrice->clear();//报价清空
        ui->labelLast->setText("0");//剩余数量归零
        ui->spinBox->setValue(0);//数量选择框归零
        ui->lineEditTotal->clear();//总价清空
        ui->spinBox->setEnabled(false);
        ui->ButtonSure->setEnabled(false);
    }
    else {
        ui->comboBoxBrand->clear();//先清空
        QSqlQuery query;
        QString sql = QString("select name from brand where factory = '%1'").arg(arg1);
        //执行sql语句
        query.exec(sql);

        //获取内容
        while (query.next()) {
            QString name = query.value(0).toString();
            ui->comboBoxBrand->addItem(name);
        }

        ui->spinBox->setEnabled(true);

    }
}

void MainWindow::on_comboBoxBrand_currentIndexChanged(const QString &arg1)
{
    QSqlQuery query;
    QString sql = QString("select price,last from brand where factory = '%1' and name = '%2'")
            .arg(ui->comboBoxFactory->currentText())//厂家下拉框当前选中内容
                 .arg(arg1);
    //执行sql语句
    query.exec(sql);

    //获取内容
    while (query.next()) {
        //报价
        int price = query.value("price").toInt();
        int last = query.value("last").toInt();

        //更新到对应的控件
        ui->lineEditPrice->setText(QString::number(price));
        ui->labelLast->setText(QString::number(last));

    }

}

//数量选择框槽函数
void MainWindow::on_spinBox_valueChanged(int arg1)
{
    //更新剩余数量
    //1.厂家
    QString factoryStr = ui->comboBoxFactory->currentText();
    //2.品牌
    QString brandStr = ui->comboBoxBrand->currentText();

    if(0 == arg1)
    {
        ui->ButtonSure->setEnabled(false);
    }
    else {
        ui->ButtonSure->setEnabled(true);
    }

    //获取数据库剩余数量
    QSqlQuery query;
    QString sql = QString("select sum,last from brand where factory = '%1' and name = '%2'").arg(factoryStr).arg(brandStr);
    //执行数据库
    query.exec(sql);
    int last;
    while (query.next()) {
        last = query.value("last").toInt();//剩余量
    }

    if(arg1>last) //如果选择的数据大于剩余的数据，中断程序
    {
        ui->spinBox->setValue(last);
        return;
    }

    if(arg1 == 0)
    {
        return;
    }

    int tempNum = last-arg1;
    ui->labelLast->setText(QString::number(tempNum));//剩余数量

    int price = ui->lineEditPrice->text().toInt();//报价
    int sum = price * arg1;

    ui->lineEditTotal->setText(QString::number(sum));


}

void MainWindow::on_ButtonCancle_clicked()
{
    //on_comboBoxFactory_currentIndexChanged("请选择厂家");
    ui->comboBoxFactory->setCurrentIndex(0);
}

void MainWindow::on_ButtonSure_clicked()
{
    //获取信息
    //1.销售数据
    int num = ui->spinBox->value();
    //2.剩余数量
    int last = ui->labelLast->text().toInt();

    //获取数据库的销量
    QSqlQuery query;
    QString sql = QString("select sell from brand where factory = '%1' and name = '%2'").arg(ui->comboBoxFactory->currentText()).arg(ui->comboBoxBrand->currentText());
    //执行数据库
    query.exec(sql);

    int sell;
    while(query.next())
    {
        sell = query.value("sell").toInt();
    }

    //更新数据库
    sell+=num;
    sql = QString("update brand set sell = %1,last = %2 where factory = '%3' and name = '%4'").arg(sell).arg(last).arg(ui->comboBoxFactory->currentText()).arg(ui->comboBoxBrand->currentText());
    query.exec(sql);

    ui->ButtonSure->setEnabled(false);
    on_ButtonCancle_clicked();
}
