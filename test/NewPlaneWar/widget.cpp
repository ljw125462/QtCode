#include "widget.h"
#include "ui_widget.h"
#include <QTimer>
#include <QPushButton>
#include "bullet.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setFixedSize(512,768);


    mGameView.setSceneRect(QRect(0,0,512,768));
    mScene.setSceneRect(QRect(0,0,512,768));
    mStartScene.setSceneRect(QRect(0,0,512,768));
    mStartScene.addPixmap(QPixmap(":/res/img_bg_level_1.jpg"));

    //第一张背景图
    mBackGround1.setPixmap(QPixmap(":/res/img_bg_level_3.jpg"));
    //第二张背景图
    mBackGround2.setPixmap(QPixmap(":/res/img_bg_level_3.jpg"));

    //飞机图片
    mPlane.setPixmap(QPixmap(":/res/hero.png"));

    //设置飞机位置
    mPlane.setPos((this->width()-mPlane.pixmap().width())/2,500);
    //第二张轮播背景位置
    mBackGround2.setPos(0,-mBackGround1.pixmap().height());

    //图片元素添加到场景
    mScene.addItem(&mBackGround1);
    mScene.addItem(&mBackGround2);
    mScene.addItem(&mPlane);

    //开始按钮
    auto startBtn = new QPushButton();
    mStartScene.addWidget(startBtn);
    startBtn->resize(200,200);
    startBtn->setIcon(QIcon(":/res/startgame.png"));
    startBtn->setIconSize(QSize(200,200));
    //startBtn.setFlat(true);
    startBtn->setStyleSheet("background-color: rgba(0, 0, 0, 0)");
    startBtn->move((mStartScene.width()-startBtn->width())/2,(mStartScene.height()-startBtn->height())/2);
    connect(startBtn,&QPushButton::clicked,[this](){
        mGameView.setScene(&mScene);
    });

    //设置视图背景
    //mGameView.setScene(&mScene);
    mGameView.setScene(&mStartScene);
    //设置视图的父亲为窗口
    mGameView.setParent(this);
    mGameView.show();

    //开启背景移动定制器
    mBGMoveTimer = new QTimer(this);
    mBGMoveTimer->start(8);
    connect(mBGMoveTimer,&QTimer::timeout,this,&Widget::BGMove);

    //开启飞机移动检测定时器
    mPlaneMoveTimer = new QTimer(this);
    mPlaneMoveTimer->start(5);
    connect(mPlaneMoveTimer,&QTimer::timeout,this,&Widget::PlaneMove);

    //开启发射子弹定时器
    mPlaneShootTimer = new QTimer(this);
    mPlaneShootTimer->start(mPlane.mShootSpeed);
    connect(mPlaneShootTimer,&QTimer::timeout,this,&Widget::BulletShoot);

    //开启子弹移动定时器
    mBulletMoveTimer = new QTimer(this);
    mBulletMoveTimer->start(10);
    connect(mBulletMoveTimer,&QTimer::timeout,[this](){
        for(auto bullet:mBulletList)
        {
            bullet->BulletMove();
        }
    });


}

Widget::~Widget()
{
    delete ui;
}

void Widget::BGMove()
{
    mBackGround1.moveBy(0,2);//moveBy移动量
    mBackGround2.moveBy(0,2);

    if(mBackGround1.y() >= mBackGround1.pixmap().height())
    {
        mBackGround1.setY(-mBackGround1.pixmap().height());
    }
    else if(mBackGround2.y() >= mBackGround2.pixmap().height())
    {
        mBackGround2.setY(-mBackGround2.pixmap().height());
    }
}

void Widget::PlaneMove()
{
    for (int keyCode : mKeyList) {
        switch (keyCode) {
        case Qt::Key_W:mPlane.moveBy(0,-2*mPlane.mMoveFloat);break;
        case Qt::Key_S:mPlane.moveBy(0,2*mPlane.mMoveFloat);break;
        case Qt::Key_A:mPlane.moveBy(-2*mPlane.mMoveFloat,0);break;
        case Qt::Key_D:mPlane.moveBy(2*mPlane.mMoveFloat,0);break;
        }
    }

    //边界判断
    if(mPlane.x()<0)
    {
        mPlane.setX(0);
    }
    else if (mPlane.x()>(mScene.width()-mPlane.pixmap().width())) {
        mPlane.setX(mScene.width()-mPlane.pixmap().width());
    }
    else if(mPlane.y()<0){
        mPlane.setY(0);
    }
    else if(mPlane.y()>(mScene.height()-mPlane.pixmap().height())){
        mPlane.setY(mScene.height()-mPlane.pixmap().height());
    }
}

void Widget::keyPressEvent(QKeyEvent *event)
{
    switch (event->key()) {
    case Qt::Key_W:
    case Qt::Key_S:
    case Qt::Key_A:
    case Qt::Key_D:
        mKeyList.append(event->key());
        break;
    }
}

void Widget::keyReleaseEvent(QKeyEvent *event)
{
    //移出对应的按键组合
    if(mKeyList.contains(event->key()))
    {
        mKeyList.removeOne(event->key());
    }

}

void Widget::BulletShoot()
{
    //创建子弹
    QPixmap bulletImg(":/res/bullet_12.png");
    QPoint pos(mPlane.x()+mPlane.pixmap().width()/2-bulletImg.width()/2,mPlane.y());
    bullet* bullet1 = new bullet(pos,bulletImg,bullet::BT_Player);

    //添加到场景
    mScene.addItem(bullet1);

    //添加到子弹管理器
    mBulletList.append(bullet1);

}
