 #include "mainwidget.h"
#include<QPushButton>

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
{
    b1.setParent(this);
    b1.setText("close");
    b1.move(100,100);

    b2=new QPushButton(this);
    b2->setText("0.0");

    connect(&b1,&QPushButton::pressed,this,&MainWidget::close);
    /*
    &b1:信号发出者
    &QPushButton::pressed：处理的信号， &发送者的类名::信号名字
    this:信号接受者
    &MainWidget::close():槽函数，信号处理函数  &接收的类名::槽函数名字
    */

    /*
    自定义槽，普通函数的用法
    Qt5:任意的成员函数，普通全局函数，静态函数
    槽函数需要和信号一致（参数，返回值）
    由于信号都是没有返回值，所以槽函数一定没有返回值
    */

    connect(b2,&QPushButton::released,this,&MainWidget::mySlot);
    connect(b2,&QPushButton::released,&b1,&QPushButton::hide);

    /*
    信号：短信
    槽函数：接收短信的手机
    */
    setWindowTitle("big");
    b3.setParent(this);
    b3.setText("切换到子窗口");
    b3.move(50,50);

    //显示子窗口
    //w.show();
    connect(&b3,&QPushButton::released,this,&MainWidget::changeWin);

    //处理子窗口信号
    connect(&w,&SubWidget::mySignal,this,&MainWidget::dealSub);
    resize(300,300);
}

void MainWidget::mySlot()
{
    b2->setText("kill");
}

void MainWidget::changeWin()
{
    //子窗口显示
    w.show();
    //本窗口隐藏
    this->hide();
}

void MainWidget::dealSub()
{
    //子窗口隐藏
    w.hide();
    //本窗口显示
    this->show();
}

MainWidget::~MainWidget()
{

}
