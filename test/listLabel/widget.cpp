#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //TableWidget控件
    //设置列数
    ui->tableWidget->setColumnCount(3);

    //设置水平表头
    ui->tableWidget->setHorizontalHeaderLabels(QStringList()<<"姓名"<<"性别"<<"年龄");

    //设置行数
    ui->tableWidget->setRowCount(5);

    //设置正文
    QStringList nameList;
    nameList<<"雷大炮"<<"雷龙"<<"雷二炮"<<"雷三炮"<<"雷四炮";


    QList<QString> sexList;
    sexList <<"男"<<"女"<<"女"<<"女"<<"男";

    for(int i=0;i<5;i++)
    {
        int col=0;
        ui->tableWidget->setItem(i,col++,new QTableWidgetItem(nameList[i]));
        ui->tableWidget->setItem(i,col++,new QTableWidgetItem(sexList.at(i)));
        ui->tableWidget->setItem(i,col++,new QTableWidgetItem(QString::number(i+18)));

    }



}

Widget::~Widget()
{
    delete ui;
}
