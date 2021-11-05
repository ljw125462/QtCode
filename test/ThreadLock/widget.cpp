#include "widget.h"
#include <QtCore>
#include <stdio.h>
#include <stdlib.h>
#include <QDebug>
#include <QList>
#include<QMutex>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
}

Widget::~Widget()
{

}

const int DataSize = 15;
const int BufferSize = 20;
 QList<char> bufferlist;    //共享的数据列表

QMutex mutexlock;    //互斥锁

// 生产者线程类
class Producer_01 : public QThread
{
public:
    void run();
};

void Producer_01::run()
{
    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
    for (int i = 0; i < DataSize; ++i) {
        mutexlock.lock();
        char test = "ACGT"[(int)qrand() % 4];
        bufferlist.append(test);
        qDebug() << QString("producer_01: %1").arg(test);
        mutexlock.unlock();
        sleep(1);
    }
}


class Producer_02 : public QThread
{
public:
    void run();
};

void Producer_02::run()
{
    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
    for (int i = 0; i < DataSize; ++i) {
        mutexlock.lock();
        char test = "HIJK"[(int)i % 4];
        bufferlist.append(test);
        qDebug() << QString("producer_02: %1").arg(test);
        mutexlock.unlock();
        msleep(300);
    }
}



// 消费者线程类
class Consumer : public QThread
{
public:
    void run();
};

void Consumer::run()
{
    while (1)
    {
        if(bufferlist.isEmpty()==false)   //如果数据列表未空，就从头还是取数据
        {
            msleep(500);     //增加延时，表示消费的滞后时间
            qDebug() << QString("consumer: %1").arg(bufferlist[0]);
            bufferlist.removeAt(0);   //删除链表的头
        }
    }
}

// 主函数
int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);
    Producer_01 producer_01;       //创建生产者的线程
    Producer_02 producer_02;
    Consumer consumer;             //创建消费者的线程
    producer_01.start();           //线程开启
    producer_02.start();
    consumer.start();
    producer_01.wait();
    producer_02.wait();
    consumer.wait();
    return app.exec();
}
