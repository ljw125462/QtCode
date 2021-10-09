#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("ele");
    resize(400,400);

    botton1 = new QPushButton(this);
    botton1->setText("老师饿了，请吃饭");
    botton1->resize(100,50);
    botton1->move(100,0);

    connect(botton1,&QPushButton::released,this,&Widget::change);
    botton2 = new QPushButton(this);
    botton2->setText("不饿了");
    botton2->resize(100,50);
    botton2->move(100,200);

    connect(botton2,&QPushButton::released,&Widget::sendSlot);
}

void Widget::change()
{
    w2.show();
}

void Widget::sendSlot()
{
    emit Signal();
}

Widget::~Widget()
{

}
