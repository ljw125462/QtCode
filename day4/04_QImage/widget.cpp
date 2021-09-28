#include "widget.h"
#include "ui_widget.h"
#include<QPainter>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //创建一个绘图设备，QImage::Format_ARGB32背景透明
    QImage image(400,300,QImage::Format_ARGB32);
    QPainter p;
    p.begin(&image);

    //绘图
    p.drawImage(0,0,QImage("../image/down.png"));

    for(int i = 0;i < 50;i++)
    {
        for(int j = 0;j<50;j++)
        {
            image.setPixel(QPoint(i,j),qRgb(255,0,0));
        }
    }

    p.end();

    image.save("../image.png");

}

Widget::~Widget()
{
    delete ui;
}
