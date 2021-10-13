#include "subwidget.h"
#include<QPainter>

SubWidget::SubWidget(QWidget *parent) : QWidget(parent)
{
    setWindowTitle("菜");
    resize(300,300);

}

void SubWidget::paintEvent(QPaintEvent *)
{
    QPainter p(this);
    p.drawPixmap(0,0,QPixmap("://Image/down.png"));
}
