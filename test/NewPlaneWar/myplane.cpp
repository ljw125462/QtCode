#include "myplane.h"

myPlane::myPlane()
{
    //飞机图片
    this->setPixmap(QPixmap(":/res/hero.png"));

    //设置飞机位置
    this->setPos(200,500);

    mMoveFloat = 1;
    mShootSpeed = 200;

}
