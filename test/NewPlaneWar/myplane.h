#ifndef MYPLANE_H
#define MYPLANE_H

#include <QGraphicsPixmapItem>

class myPlane : public QGraphicsPixmapItem
{

public:
    explicit myPlane();

    float mMoveFloat;
    int mShootSpeed;

};

#endif // MYPLANE_H
