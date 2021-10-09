#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QPushButton>
#include"subwidget.h"

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    void change();
    void sendSlot();

    ~Widget();
signals:
    void Signal();
private:
    QWidget w;
    QPushButton *botton1;
    QPushButton *botton2;
    SubWidget w2;
};

#endif // WIDGET_H
