#include "playscene.h"
#include<QDebug>
#include<QMenuBar>
#include<QAction>
#include<QPainter>
#include"mypushbotton.h"
#include<QLabel>
#include"mycoin.h"
#include"dataconfig.h"
#include<QPropertyAnimation>
#include<QSound>

//PlayScene::PlayScene(QWidget *parent) : QMainWindow(parent)
//{

//}

PlayScene::PlayScene(int levelNum)
{
    QString str = QString("这是第 %1 关").arg(levelNum);
    qDebug()<<str;
    this->levelIndex = levelNum;

    //初始化游戏场景
    //设置固定的大小
    this->setFixedSize(320,588);
    //设置图标
    setWindowIcon(QIcon("://res/Coin0001.png"));
    //设置标题
    setWindowTitle("翻金币主场景");

    //创建菜单栏
    QMenuBar * bar = menuBar();
    setMenuBar(bar);

    //创建开始菜单
    QMenu * startMenu = bar->addMenu("开始");
    QAction * action = startMenu->addAction("退出");

    connect(action,&QAction::triggered,[=](){
        this->close();
    });

    MyPushBotton * backBtn = new MyPushBotton(":/res/BackButton.png",":/res/BackButtonSelected.png");
    backBtn->setParent(this);
    backBtn->move(this->width()-backBtn->width(),this->height()-backBtn->height());

    //返回按钮音效
    QSound *backSound = new QSound(":/res/BackButtonSound.wav",this);

    //点击返回按钮
    connect(backBtn,&MyPushBotton::clicked,[=](){
        qDebug() << "点击了返回";
        backSound->play();
        //发出返回信号 主场景监听信号
        emit this->chooseSceneBack();
    });

    //显示当前关卡
    QLabel * label = new QLabel;
    label->setParent(this);
    QFont font;
    font.setFamily("华文新魏");//字体
    font.setPointSize(20);//大小
    label->setFont(font);//将字体设置到标签中
    QString str2 = QString("Level: %1").arg(this->levelIndex);
    label->setText(str2);
    label->setGeometry(QRect(30, this->height() - 50,120, 50)); //设置大小和位置

    //初始化每个关卡的二维数组
    dataConfig config;
    for(int i = 0 ; i < 4;i++)
    {
        for(int j = 0 ; j < 4; j++)
        {
            gameArray[i][j] = config.mData[this->levelIndex][i][j];
        }
    }

    QLabel* winLabel = new QLabel;
    QPixmap tmpPix;
    tmpPix.load(":/res/LevelCompletedDialogBg.png");
    winLabel->setGeometry(0,0,tmpPix.width(),tmpPix.height());
    winLabel->setPixmap(tmpPix);
    winLabel->setParent(this);
    winLabel->move( (this->width() - tmpPix.width())*0.5 , -tmpPix.height());

    //创建金币的背景图片
    for(int i = 0 ; i < 4;i++)
    {
        for(int j = 0 ; j < 4; j++)
        {
            //绘制背景图片
            QLabel* label = new QLabel;
            label->setGeometry(0,0,50,50);
            label->setPixmap(QPixmap(":/res/BoardNode(1).png"));
            label->setParent(this);
            label->move(57 + i*50,200+j*50);

            QString img;
            if(gameArray[i][j] == 1)
            {
                img = ":/res/Coin0001.png";
            }
            else
            {
                img = ":/res/Coin0008.png";
            }
            //金币对象
            MyCoin * coin = new MyCoin(img);
            coin->setParent(this);
            coin->move(59 + i*50,204+j*50);

            coin->posX = i; //记录x坐标
            coin->posY = j; //记录y坐标
            coin->flag =gameArray[i][j]; //记录正反标志

            coinBtn[i][j]=coin;

            //翻金币音效
            QSound *flipSound = new QSound(":/res/ConFlipSound.wav",this);
            //胜利按钮音效
            QSound *winSound = new QSound(":/res/LevelWinSound.wav",this);

            connect(coin,&MyCoin::clicked,[=](){
                flipSound->play();
                for(int i = 0 ; i < 4;i++)
                {
                    for(int j = 0 ; j < 4; j++)
                    {
                        this->coinBtn[i][j]->isWin=true;

                    }
                }

                coin->changeFlag();
                this->gameArray[i][j]=this->gameArray[i][j]==0?1:0;
                //翻转周围金币
                QTimer::singleShot(300, this,[=](){
                    if(coin->posX+1 <=3)
                    {
                        coinBtn[coin->posX+1][coin->posY]->changeFlag();
                        gameArray[coin->posX+1][coin->posY] = gameArray[coin->posX+1][coin->posY]== 0 ? 1 : 0;
                    }
                    if(coin->posX-1>=0)
                    {
                        coinBtn[coin->posX-1][coin->posY]->changeFlag();
                        gameArray[coin->posX-1][coin->posY] = gameArray[coin->posX-1][coin->posY]== 0 ? 1 : 0;
                    }
                    if(coin->posY+1<=3)
                    {
                        coinBtn[coin->posX][coin->posY+1]->changeFlag();
                        gameArray[coin->posX][coin->posY+1] = gameArray[coin->posX+1][coin->posY]== 0 ? 1 : 0;
                    }
                    if(coin->posY-1>=0)
                    {
                        coinBtn[coin->posX][coin->posY-1]->changeFlag();
                        gameArray[coin->posX][coin->posY-1] = gameArray[coin->posX+1][coin->posY]== 0 ? 1 : 0;
                    }

                    for(int i = 0 ; i < 4;i++)
                    {
                        for(int j = 0 ; j < 4; j++)
                        {
                            this->coinBtn[i][j]->isWin=false;

                        }
                    }

                    this->isWin = true;
                    for(int i = 0 ; i < 4;i++)
                    {
                        for(int j = 0 ; j < 4; j++)
                        {
                            //qDebug() << coinBtn[i][j]->flag ;
                            if( coinBtn[i][j]->flag == false)
                            {
                                this->isWin = false;
                                break;
                            }
                        }
                    }
                    //胜利后 将所有按钮改为true 禁用所有按钮点击事件
                    for(int i = 0 ; i < 4;i++)
                    {
                        for(int j = 0 ; j < 4; j++)
                        {
                            coinBtn[i][j]->isWin = true;
                        }
                    }
                    if(this->isWin)
                    {
                        winSound->play();
                        qDebug() << "游戏胜利";
                        QPropertyAnimation * animation1 =  new QPropertyAnimation(winLabel,"geometry");
                        //设置时间间隔
                        animation1->setDuration(1000);
                        //设置开始位置
                        animation1->setStartValue(QRect(winLabel->x(),winLabel->y(),winLabel->width(),winLabel->height()));
                        //设置结束位置
                        animation1->setEndValue(QRect(winLabel->x(),winLabel->y()+114,winLabel->width(),winLabel->height()));

                        //设置缓和曲线
                        animation1->setEasingCurve(QEasingCurve::OutBounce);
                        //执行动画
                        animation1->start();
                    }
                });
            });

        }
    }


}

void PlayScene::paintEvent(QPaintEvent *)
{
    //创建背景
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/res/OtherSceneBg.png");
    painter.drawPixmap(0,0,this->width(),this->height(),pix);

    //加载标题
    pix.load(":/res/Title.png");
    painter.drawPixmap( (this->width() - pix.width())*0.5,30,pix.width(),pix.height(),pix);

}
