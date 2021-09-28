#include "widget.h"
#include "ui_widget.h"
#include<QDataStream>
#include<QFile>
#include<QDebug>
#include<QTextStream>
//
#define cout qDebug() <<"["<<__FILE__<<":"<<__LINE__<<"]"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    writeData();
    readData();
}

Widget::~Widget()
{
    delete ui;
}


void Widget::writeData()
{
    //创建文件对象
    QFile file("../tedt.txt");

    //打开文件，只写方式打开
    bool isOK = file.open(QIODevice::WriteOnly);
    if(isOK==true)
    {
        //创建数据流，和file文件关联
        //往数据流输入数据，相当于往文件里写数据
        QDataStream stream(&file);

        stream<<QString("kill龙")<<250;
        file.close();

    }


}

void Widget::readData()
{
    //创建文件对象
    QFile file("../tedt.txt");

    //打开文件，只读方式打开
    bool isOK = file.open(QIODevice::ReadOnly);
    if(isOK==true)
    {
        //创建数据流，和file文件关联
        //往数据流输入数据，相当于往文件里读数据
        QDataStream stream(&file);
        //读的时候，按写的顺序取数据
        QString str;
        int a;
        stream >> str >> a;
        //qDebug() << str << a;
        cout << str << a;

        file.close();

    }


}
