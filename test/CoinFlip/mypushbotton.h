#ifndef MYPUSHBOTTON_H
#define MYPUSHBOTTON_H

#include <QPushButton>

class MyPushBotton : public QPushButton
{
    Q_OBJECT
public:
    //explicit MyPushBotton(QWidget *parent = nullptr);

    //构造函数
    MyPushBotton(QString normalImg,QString pressImg = "");

    QString normalImgPath;
    QString pressImgPath;

    //弹跳特效
    void zoom1();//向下跳
    void zoom2();//向上跳

    //重写按钮的按下和释放事件
    void mousePressEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);

signals:

public slots:
};

#endif // MYPUSHBOTTON_H
