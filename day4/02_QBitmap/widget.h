#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

protected:
    //重写绘图时间
    //如果给窗口绘图，一定要在paintevent()绘图
    void paintEvent(QPaintEvent *);

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
