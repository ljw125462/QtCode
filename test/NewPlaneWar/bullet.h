#ifndef BULLET_H
#define BULLET_H

#include <QGraphicsPixmapItem>

class bullet : public QGraphicsPixmapItem
{  

public:
    //子弹类型
    enum bulletType
    {
        BT_Player,//我方
        BT_Enemy//敌方
    };
    explicit bullet(QObject *parent = nullptr);
    bullet(QPoint _pos,QPixmap _pixmap,int _type);

    //
    void BulletMove(QPoint _dir = QPoint(0,-1));

    int mBulletType;
    int mSpeed;

};

#endif // BULLET_H
