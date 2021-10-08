#include "widget.h"
#include "ui_widget.h"
#include<QSqlDatabase>
#include<QDebug>
#include<QMessageBox>
#include<QSqlError>
#include<QSqlQuery>
#include<QVariantList>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //打印Qt支持的数据库驱动
    qDebug() << QSqlDatabase::drivers();

    //添加Mysql数据库
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");

    //连接数据库
    db.setHostName("localhost");//数据库服务器IP
    db.setUserName("root");//数据库用户名
    db.setPassword("root");//密码
    db.setDatabaseName("info");//数据库名

    //打开数据库
    if(!db.open())//数据库打开失败
    {
        QMessageBox::warning(this,"打开错误",db.lastError().text());
        return;
    }

    //QSqlQuery query;
    //query.exec("create table student(id int primary key auto_increment,name varchar(255),age int,score int);");

    //插入数据
    QSqlQuery query;
    query.exec("insert into student(id,name,age,score) values(1,'ljw',18,66);");

    //批量插入
    //odbc风格
    //预处理语句
    //?相当于 占位符
    query.prepare("insert into student(name,age,score) values(?,?,?)");

    //给字段设置内容 list
    QVariantList namelist;
    namelist << "雷龙" << "雷大炮" << "雷二炮";
    QVariantList agelist;
    agelist<<3<<22<<50;
    QVariantList scorelist;
    scorelist<<50<<60<<99;
    //给字段绑定相应的值  按顺序绑定
    query.addBindValue(namelist);
    query.addBindValue(agelist);
    query.addBindValue(scorelist);
    //执行预处理命令
    query.execBatch();

    //oracle风格
    //占位符  :+自定义名字
//    query.prepare("insert into student(name,age,score) values(:name,:age,:score);");
//    QVariantList namelist;
//    namelist << "a" << "b" << "c";
//    QVariantList agelist;
//    agelist<<3<<22<<50;
//    QVariantList scorelist;
//    scorelist<<50<<60<<99;
//    //给字段绑定
//    query.bindValue(":name",namelist);
//    query.bindValue(":score",scorelist);
//    query.bindValue(":age",agelist);
//    //执行预处理命令
//    query.execBatch();

    query.exec("select * from student");

    while (query.next()) //一行一行遍历
    {
        //取出当前行的内容
        qDebug()<< query.value(0).toInt()
                << query.value(1).toString()
                << query.value("age").toInt()
                << query.value("score").toInt();
    }

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_ButtonDel_clicked()
{
    //获取行编辑内容
    QString name = ui->lineEdit->text();


    QString sql = QString("delete from student where name = '%1'").arg(name);

    //开启一个事务
    QSqlDatabase::database().transaction();
    QSqlQuery query;
    query.exec(sql);
}

void Widget::on_ButtonSure_clicked()
{
    //确定删除
    QSqlDatabase::database().commit();
}

void Widget::on_ButtonCancel_clicked()
{
    //回滚，撤销
    QSqlDatabase::database().rollback();
}
