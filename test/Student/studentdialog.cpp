#include "studentdialog.h"
#include "ui_studentdialog.h"

StudentDialog::StudentDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StudentDialog)
{
    ui->setupUi(this);
    createDB();
    createTable();
    queryTable();
}

StudentDialog::~StudentDialog()
{
    delete ui;
}

void StudentDialog::createDB()
{
    //添加数据库驱动库
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    //设置数据库名字
    db.setDatabaseName("../student.db");
    //打开数据库
    if(db.open() == true)
    {
        qDebug() <<"数据库打开成功";
    }
    else
    {
        qDebug() <<"数据库打开失败";
    }

}

void StudentDialog::createTable()
{
    QSqlQuery query;
    QString str = QString("CREATE TABLE Student("
                          "id INT PRIMARY KEY NOT NULL,"
                          "name TEXT NOT NULL,"
                          "score REAL NOT NULL)");
    if(query.exec(str) == false)
    {
        qDebug() <<str;
    }
    else
    {
        qDebug() << "创建数据表成功！";
    }
}

void StudentDialog::queryTable()
{
    QString str = QString("select * from student");
    model.setQuery(str);
    ui->tableView->setModel(&model);
}

//插入操作槽函数
void StudentDialog::on_insertButton_clicked()
{
    QSqlQuery query;
    int id = ui->idEdit->text().toInt();
    if(id == 0)
    {
        QMessageBox::critical(this,"ERROR","id不能为0");
        return;
    }
    QString name = ui->nameEdit->text();
    if(name == "")
    {
        QMessageBox::critical(this,"ERROR","姓名不能为空");
        return;
    }
    double score = ui->scoreEdit->text().toDouble();
    if(score < 0 || score > 100)
    {
        QMessageBox::critical(this,"ERROR","分数输入有误");
        return;
    }
    QString str = QString("insert into student values(%1,'%2',%3)").arg(id).arg(name).arg(score);
    if(query.exec(str) == false)
    {
        qDebug() << str;
    }
    else {
        qDebug() << "插入成功！";
        queryTable();
    }
}

//删除按钮槽函数 根据id删除数据
void StudentDialog::on_deleteButton_clicked()
{
    QSqlQuery query;
    int id = ui->idEdit->text().toInt();
    QString str = QString("delete from student where id = %1").arg(id);

    if(QMessageBox::question(this,"提示","确认删除？",QMessageBox::Yes,QMessageBox::No)==QMessageBox::No)
    {
        return;
    }

    if(query.exec(str) == false)
    {
        qDebug() << str;
    }
    else {
        qDebug() << "删除成功！";
        queryTable();
    }
}

//修改操作槽函数 根据id修改成绩
void StudentDialog::on_updateButton_clicked()
{
    QSqlQuery query;
    int id = ui->idEdit->text().toInt();
    double score = ui->scoreEdit->text().toDouble();
    QString str = QString("update student set score=%1 where id =%2").arg(score).arg(id);
    if(query.exec(str) == false)
    {
        qDebug() << str;
    }
    else {
        qDebug() << "修改成功！";
        queryTable();
    }
}

//排序按钮槽函数
void StudentDialog::on_SortButton_clicked()
{
    //获取排序的列名
    QString value = ui->valueComboBox->currentText();
    QString condition;
    if(ui->condComboBox->currentIndex()==0)
    {
        condition = "ASC";//升序
    }
    else {
        condition = "DESC";//降序
    }
    QString str = QString("select * from student order by %1 %2").arg(value).arg(condition);

    //查询和显示
    model.setQuery(str);
    ui->tableView->setModel(&model);



}
