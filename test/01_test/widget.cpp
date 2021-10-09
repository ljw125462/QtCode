#include "widget.h"
#include "ui_widget.h"
#include<QPushButton>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    w.setWindowTitle("ele");
    w.resize(400,400);

    botton1->setParent(this);
    botton1->setText("老师饿了，请吃饭");
    botton1->resize(100,50);
    botton1->move(100,0);

   //connect(botton1,&QPushButton::click,this,&Widget::change);

    botton2->setParent(this);
    botton2->setText("不饿了");
    botton2->resize(100,50);
    botton2->move(100,200);
}

void Widget::change()
{
    w2.show();
}

Widget::~Widget()
{
    delete ui;
}
