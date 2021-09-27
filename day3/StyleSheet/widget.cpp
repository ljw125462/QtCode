#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->label->setStyleSheet("QLabel{color:rgb(255,0,0);"
                                "background-color:rgb(0,255,255);"
                             "border-image:url(://image/Sunny.jpg);"
                                  "}");
    ui->pushButton->setStyleSheet("QPushButton{"
                                  "border: 2px outset green;"
                                  "border-image:url(://image/Sunny.jpg);"
                                  "}"
                                  "QPushButton:hover{"
                                  "border-image:url(://image/butterfly.png);"
                                            "}"
                                  "QPushButton:pressed{"
                                  "border-image:url(://image/up.png);"
                                            "}"
                                  );
}

Widget::~Widget()
{
    delete ui;
}
