#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>

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
    int timeId;
    int timeId2;

protected:
    //键盘按下事件
    void keyPressEvent(QKeyEvent *);
    //计时器事件
    void timerEvent(QTimerEvent *);

    void mousePressEvent(QMouseEvent *);

    void closeEvent(QCloseEvent *);

    void eventFilter(QObject *obj, QEvent *e);
};

#endif // MYWIDGET_H
