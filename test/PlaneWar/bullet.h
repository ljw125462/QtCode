﻿#ifndef BULLET_H
#define BULLET_H
#include <QPixmap>
#include "config.h"

class Bullet
{
public:
    Bullet();

    //更新子弹坐标
    void updatePosition();

public:
    //子弹资源对象
    QPixmap m_Bullet;

    //子弹坐标
    int m_x;
    int m_y;

    //子弹移动速度
    int m_speed;

    //子弹是否闲置
    bool m_free;

    //子弹的矩形边框（用于碰撞检测）
    QRect m_Rect;

};

#endif // BULLET_H
