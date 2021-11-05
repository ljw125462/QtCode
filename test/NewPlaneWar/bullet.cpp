#include "bullet.h"

bullet::bullet(QObject *parent)
{

}

bullet::bullet(QPoint _pos, QPixmap _pixmap, int _type)
{
    this->setPos(_pos);
    this->setPixmap(QPixmap(_pixmap));
    this->mBulletType = _type;
    mSpeed = 6;

}

void bullet::BulletMove(QPoint _dir)
{
    this->moveBy(_dir.x()*mSpeed,_dir.y()*mSpeed);
}
