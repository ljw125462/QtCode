#include "mypushbotton.h"
#include<QDebug>
#include<QPixmap>
#include<QPropertyAnimation>

//MyPushBotton::MyPushBotton(QWidget *parent) : QWidget(parent)
//{

//}

MyPushBotton::MyPushBotton(QString normalImg, QString pressImg)
{
    this->normalImgPath=normalImg;
    this->pressImgPath=pressImg;

    QPixmap pix;
    bool ret = pix.load(normalImg);

    if(ret == false)
    {
        qDebug() <<"图片加载失败";
        return;
    }

    //设置图片固定大小
    this->setFixedSize(pix.width(),pix.height());

    //设置不规则图片样式
    this->setStyleSheet("QPushButton{border:0px;}");

    //设置图标
    this->setIcon(pix);

    //设置图标的大小
    this->setIconSize(QSize(pix.width(),pix.height()));

}

void MyPushBotton::zoom1()
{
    //创建动画对象
    QPropertyAnimation * animation = new QPropertyAnimation(this,"geometry");
    //设置动画时间间隔
    animation->setDuration(200);

    //设置开始位置
    animation->setStartValue(QRect(this->x(),this->y(),this->width(),this->height()));
    //设置结束位置
    animation->setEndValue(QRect(this->x(),this->y()+10,this->width(),this->height()));

    //设置弹跳曲线
    animation->setEasingCurve(QEasingCurve::OutElastic);

    //开始执行动画
    animation->start();

}

void MyPushBotton::zoom2()
{
    //创建动画对象
    QPropertyAnimation * animation = new QPropertyAnimation(this,"geometry");
    //设置动画时间间隔
    animation->setDuration(200);

    //设置开始位置
    animation->setStartValue(QRect(this->x(),this->y()+10,this->width(),this->height()));
    //设置结束位置
    animation->setEndValue(QRect(this->x(),this->y(),this->width(),this->height()));

    //设置弹跳曲线
    animation->setEasingCurve(QEasingCurve::OutElastic);

    //开始执行动画
    animation->start();
}

void MyPushBotton::mousePressEvent(QMouseEvent *e)
{
    if(this->pressImgPath!="")
    {
        QPixmap pixmap;
        bool ret = pixmap.load(pressImgPath);
        if(!ret)
        {
              qDebug() << pressImgPath << "加载图片失败!";
        }

        this->setFixedSize( pixmap.width(), pixmap.height() );
        this->setStyleSheet("QPushButton{border:0px;}");
        this->setIcon(pixmap);
        this->setIconSize(QSize(pixmap.width(),pixmap.height()));
    }
    //交给父类执行其他内容
    return QPushButton::mousePressEvent(e);

}

void MyPushBotton::mouseReleaseEvent(QMouseEvent *e)
{
    if(normalImgPath != "") //选中路径不为空，显示选中图片
       {
           QPixmap pixmap;
           bool ret = pixmap.load(normalImgPath);
           if(!ret)
           {
               qDebug() << normalImgPath << "加载图片失败!";
           }
           this->setFixedSize( pixmap.width(), pixmap.height() );
           this->setStyleSheet("QPushButton{border:0px;}");
           this->setIcon(pixmap);
           this->setIconSize(QSize(pixmap.width(),pixmap.height()));
       }
    return QPushButton::mouseReleaseEvent(e);
}



