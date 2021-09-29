#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    myTimer = new QTimer(this);

    connect(myTimer,&QTimer::timeout,[=]()
    {
        static int i = 0;
        i++;
        ui->lcdNumber->display(i);
    });
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_ButtonStart_clicked()
{
    //如果定时器没有激活，才启动
    if(myTimer->isActive() == false)
    {
        myTimer->start(100);//启动定时器 时间间隔为100ms
        //每隔100ms，定时器myTimer自动触发timeout()信号
    }


}

void Widget::on_ButtonStop_clicked()
{
    if(myTimer->isActive() == true)
    {
        myTimer->stop();
    }

}
