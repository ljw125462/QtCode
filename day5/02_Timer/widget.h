#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QTimer>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_ButtonStart_clicked();

    void on_ButtonStop_clicked();

private:
    Ui::Widget *ui;

    QTimer * myTimer;//创建定时器对象
};

#endif // WIDGET_H
