#include "mywidget.h"
#include "ui_mywidget.h"
#include<QDebug>
#include<QKeyEvent>
#include<QCloseEvent>
#include<QMessageBox>
#include<QEvent>
#include<

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);
    timeId = this->startTimer(1000);//毫秒为单位，每隔一秒触发一次
    this->timeId2=this->startTimer(500);

    connect(ui->pushButton,&MyButton::clicked,[=]()
    {
        qDebug()<<"1";
    });

    //安装过滤器
    ui->label_2->installEventFilter(this);
    ui->label_2->setMouseTracking(true);
}

MyWidget::~MyWidget()
{
    delete ui;
}

void MyWidget::keyPressEvent(QKeyEvent *e)
{
    qDebug() << e->key();

    if(e->key() == Qt::Key_A)
    {
        qDebug()<<"Qt::Key_A";
    }
}

void MyWidget::timerEvent(QTimerEvent *e)
{
    if(e->timerId() == this->timeId)
    {
        static int sec=0;
        ui->label->setText(QString("<center><h1>timer out: %1</h1></center>").arg(sec++));
        if(sec==5)
        {
            //停止定时器
            this->killTimer(this->timeId);
        }
    }
    else if(e->timerId() == this->timeId2)
    {
        static int sec=0;
        ui->label_2->setText(QString("<center><h1>timer out2: %1</h1></center>").arg(sec++));
    }

}

void MyWidget::mousePressEvent(QMouseEvent *e)
{
    qDebug()<<"++++++++++";
}

void MyWidget::closeEvent(QCloseEvent *e)
{
    int ret = QMessageBox::question(this,"quetion","是否确定关闭？");
    if(ret == QMessageBox::Yes)
    {
        //关闭窗口
        //处理关闭窗口事件，接收事件，事件就不会再往下传递
        e->accept();
    }
    else
    {
        //不关闭窗口
        //忽略事件，事件继续传递给父组件
        e->ignore();
    }
}

bool MyWidget::eventFilter(QObject *obj, QEvent *e)
{
    if(obj == ui->label_2)
    {
        QMouseEvent *env=static_cast<QMouseEvent *>(e);
        //判断事件
        if(e->type() == QEvent::MouseMove)
        {
            ui->label_2->setText(QString("Mouse move: %1,%2").arg(env->x()).arg(env->y()));
            return true;
        }
        else
        {
            return QWidget::eventFilter(obj,e);
        }
    }
    else
    {
        return QWidget::eventFilter(obj,e);
    }
}
