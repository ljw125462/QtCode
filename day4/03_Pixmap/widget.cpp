#include "widget.h"
#include "ui_widget.h"
#include<QPainter>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    QPixmap pixmap(400,400);

    QPainter p(&pixmap);

    //填充背景色
    //p.fillRect(0,0,400,400,QBrush(Qt::yellow));
    pixmap.fill(Qt::white);

    p.drawPixmap(0,0,80,80,QPixmap("../image/down.png"));

    //保存图片
    pixmap.save("..//pixmap.png");

}

Widget::~Widget()
{
    delete ui;
}
