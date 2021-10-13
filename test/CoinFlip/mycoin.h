#ifndef MYCOIN_H
#define MYCOIN_H

#include <QPushButton>
#include<QTimer>

class MyCoin : public QPushButton
{
    Q_OBJECT
public:
    //explicit MyCoin(QWidget *parent = nullptr);
    MyCoin(QString btnImg);

    int posX; //x坐标
    int posY; //y坐标
    bool flag; //正反标志

    //改变标志的方法
    void changeFlag();
    QTimer *timer1; //正面翻反面 定时器
    QTimer *timer2; //反面翻正面 定时器
    int min = 1; //最小图片
    int max = 8; //最大图片

    //执行动画 标志
    bool isAnimation=false;

    //重写鼠标按下
    void MousePressEvent(QMouseEvent *e);

    //是否胜利标志
    bool isWin=false;

signals:

public slots:
};

#endif // MYCOIN_H
