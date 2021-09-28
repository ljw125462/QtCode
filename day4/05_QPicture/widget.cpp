#include "widget.h"
#include "ui_widget.h"
#include<QPainter>
#include<QPicture>
#include<QPixmap>
#include<QImage>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    QPicture picture;
    QPainter p;
    p.begin(&picture);

    p.drawPixmap(0,0,80,80,QPixmap("../image/down.png"));
    p.drawLine(50,50,100,150);

    p.end();

    picture.save("../picture.png");

}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *)
{
#if 0
    QPicture pic;
    pic.load("../picture.png");

    QPainter p(this);
    p.drawPicture(0,0,pic);
#endif
    QPainter p(this);
    QPixmap pixmap;
    pixmap.load("../image/down.png");

    //QPixmap -> QImage
    QImage tempImage = pixmap.toImage();
    p.drawImage(0,0,tempImage);

    QImage image;
    image.load("../image/down.png");

    //QImage -> QPixmap
    QPixmap tempPixmap = QPixmap::fromImage(image);
    p.drawPixmap(100,0,tempPixmap);


}
