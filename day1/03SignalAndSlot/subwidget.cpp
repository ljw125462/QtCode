#include "subwidget.h"

SubWidget::SubWidget(QWidget *parent) :
    QWidget(parent)
{
    this->setWindowTitle("small");
    b.setParent(this);
    b.setText("切换到主窗口");

    connect(&b,&QPushButton::clicked,this,&SubWidget::sendSlot);
    resize(300,300);
}

void SubWidget::sendSlot()
{
    emit mySignal();
}
