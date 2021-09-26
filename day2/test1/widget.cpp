#include "widget.h"
#include<QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QPushButton *button = new QPushButton("0.0",this);
    button->setGeometry(100,50,200,200);

    //Qt4
    //connect(button,SIGNAL(clicked()),this,SLOT(close()));

    //Qt5
    //connect(button,&QPushButton::clicked,this,&Widget::close);

    connect(button,&QPushButton::clicked,[=](){
        button->setText("*.*");
    });
}

Widget::~Widget()
{

}
