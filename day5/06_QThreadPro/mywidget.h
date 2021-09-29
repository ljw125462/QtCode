#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include"mythread.h"
#include<QThread>

namespace Ui {
class MyWidget;
}

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MyWidget(QWidget *parent = 0);
    ~MyWidget();

private:
    Ui::MyWidget *ui;
    MyThread *myT;
    QThread *thread;
};

#endif // MYWIDGET_H
