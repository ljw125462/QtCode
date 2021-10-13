#include "mainscene.h"
#include "ui_mainscene.h"
#include<QPainter>
#include"mypushbotton.h"
#include<QDebug>
#include<QTimer>
#include<QSound>//多媒体模块下的音效头文件

MainScene::MainScene(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainScene)
{
    ui->setupUi(this);

    //配置主场景

    //设置固定大小
    setFixedSize(320,588);

    //设置图标
    setWindowIcon(QIcon("://res/Coin0001.png"));

    //设置标题
    setWindowTitle("ljw带你翻金币");

    //退出
    connect(ui->actionquit,&QAction::triggered,[=](){
        this->close();
    });

    //准备开始按钮音效
    QSound * startSound = new QSound(":/res/TapButtonSound.wav",this);
    //startSound->setLoops(-1);//无限循环音效


    //开始按钮
    MyPushBotton * startBtn = new MyPushBotton(":/res/MenuSceneStartButton.png");
    startBtn->setParent(this);
    startBtn->move(this->width()*0.5-startBtn->width()*0.5,this->height()*0.7);

    chooseScene = new ChooseLevelScene;

    connect(startBtn,&MyPushBotton::clicked,[=](){
       qDebug() << "点击了开始按钮！";
       startSound->play();
       startBtn->zoom1();
       startBtn->zoom2();

       //延时进入
       QTimer::singleShot(500,this,[=](){
           //自身隐藏
           this->hide();
           //设置chooseScene场景的位置
           chooseScene->setGeometry(this->geometry());
           //进入到选择关卡场景中
           chooseScene->show();
       });
    });

    connect(chooseScene,&ChooseLevelScene::chooseSceneBack,[=](){
        QTimer::singleShot(500,this,[=](){
            this->setGeometry(chooseScene->geometry());
            this->show();
            chooseScene->hide();
        });
    });
}

MainScene::~MainScene()
{
    delete ui;
}

void MainScene::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/res/PlayLevelSceneBg.png");

    painter.drawPixmap(0,0,this->width(),this->height(),pix);

    pix.load(":/res/Title.png");

    pix = pix.scaled(pix.width()*0.5,pix.height()*0.5);

    painter.drawPixmap(10,30,pix);







}
