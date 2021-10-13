#include "chooselevelscene.h"
#include<QMenuBar>
#include<QPainter>
#include"mypushbotton.h"
#include<QDebug>
#include<QLabel>
#include<QTimer>
#include<QSound>

ChooseLevelScene::ChooseLevelScene(QWidget *parent) : QMainWindow(parent)
{
    //设置固定大小
    this->setFixedSize(320,588);
    //设置图标
    this->setWindowIcon(QPixmap(":/res/Coin0001.png"));
    //设置标题
    this->setWindowTitle("选择关卡");

    //创建菜单栏
    QMenuBar * bar = this->menuBar();
    this->setMenuBar(bar);
    //创建开始菜单
    QMenu * startMenu = bar->addMenu("开始");
    //创建按钮菜单项
    QAction * quitAction = startMenu->addAction("退出");
    //点击退出 退出游戏
    connect(quitAction,&QAction::triggered,[=](){
        this->close();
    });

    //返回按钮
    MyPushBotton * backBtn = new MyPushBotton(":/res/BackButton.png",":/res/BackButtonSelected.png");
    backBtn->setParent(this);
    backBtn->move(this->width()-backBtn->width(),this->height()-backBtn->height());

    //返回按钮音效
    QSound *backSound = new QSound(":/res/BackButtonSound.wav",this);

    //点击返回按钮
    connect(backBtn,&MyPushBotton::clicked,[=](){
        //qDebug() << "点击了返回";
        backSound->play();
        //发出返回信号 主场景监听信号
        emit this->chooseSceneBack();
    });

    //创建选择关卡的按钮
    for(int i = 0;i<20;i++)
    {
        MyPushBotton * menuBtn = new MyPushBotton(":/res/LevelIcon.png");
        menuBtn->setParent(this);
        menuBtn->move(25 + (i%4)*70 , 130+ (i/4)*70);

        //选择关卡按钮音效
        QSound *chooseSound = new QSound(":/res/TapButtonSound.wav",this);

        connect(menuBtn,&MyPushBotton::clicked,[=](){
            QString str = QString("您选择的是第 %1 关。").arg(i+1);
            qDebug() << str;
            chooseSound->play();

            //进入到游戏关卡中
            this->hide();
            play = new PlayScene(i+1);
            play->setGeometry(this->geometry());
            play->show();

            connect(play,&PlayScene::chooseSceneBack,[=](){
                QTimer::singleShot(500,this,[=](){
                    this->setGeometry(play->geometry());
                    this->show();
                    delete play;
                    play = NULL;
                });
            });

        });

        QLabel * label = new QLabel();
        label->setParent(this);
        label->setFixedSize(menuBtn->width(),menuBtn->height());
        label->setText(QString::number(i+1));
        //设置文字水平居中和垂直居中
        label->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
        label->move(25 + (i%4)*70 , 130+ (i/4)*70);

        //设置让鼠标进行穿透
        label->setAttribute(Qt::WA_TransparentForMouseEvents,true);

    }
}

void ChooseLevelScene::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/res/OtherSceneBg.png");
    painter.drawPixmap(0,0,this->width(),this->height(),pix);

    //加载标题
    pix.load(":/res/Title.png");
    painter.drawPixmap( (this->width() - pix.width())*0.5,30,pix.width(),pix.height(),pix);
}
