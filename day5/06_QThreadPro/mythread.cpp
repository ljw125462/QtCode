#include "mythread.h"
#include<QThread>


MyThread::MyThread(QObject *parent) :
    QObject(parent)
{
}

void MyThread::myTimeout()
{
    while(1)
    {
        QThread::sleep(1);
        emit mySignal();
    }
}
