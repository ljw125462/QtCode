#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include"subwidget.h"
#include<QPushButton>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    void change();
    ~Widget();

private:
    Ui::Widget *ui;
    QWidget w;
    QPushButton *botton1;
    QPushButton *botton2;
    SubWidget w2;
};

#endif // WIDGET_H
