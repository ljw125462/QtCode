#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QGraphicsPixmapItem>//图形元素
#include <QGraphicsView>//视图
#include <QGraphicsScene>//场景
#include <QKeyEvent>
#include <QList>
#include "myplane.h"
#include <QPushButton>
#include <bullet.h>

//元素组成 -> 场景 -> 视图 -> 窗口

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

    //背景移动函数
    void BGMove();
    //飞机移动函数
    void PlaneMove();

    //按键时间
    void keyPressEvent(QKeyEvent* event);
    void keyReleaseEvent(QKeyEvent* event);

    //我机子弹生成函数
    void BulletShoot();


private:
    Ui::Widget *ui;

    QGraphicsView mGameView;//游戏视图
    QGraphicsScene mScene;//游戏场景
    QGraphicsScene mStartScene;

    myPlane mPlane;

    QGraphicsPixmapItem mBackGround1;//背景元素
    QGraphicsPixmapItem mBackGround2;

    //背景移动定时器
    QTimer* mBGMoveTimer;
    //飞机移动检测定时器
    QTimer* mPlaneMoveTimer;

    //发射子弹定时器
    QTimer* mPlaneShootTimer;
    //子弹移动定时器
    QTimer* mBulletMoveTimer;

    //---容器---
    //按键组合
    QList<int> mKeyList;
    //子弹容器
    QList<bullet*> mBulletList;


};

#endif // WIDGET_H
