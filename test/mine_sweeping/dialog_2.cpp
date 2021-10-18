#include "dialog_2.h"
#include "ui_dialog_2.h"

Dialog_2::Dialog_2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_2)
{
    ui->setupUi(this);
}

Dialog_2::~Dialog_2()
{
    delete ui;
}

void Dialog_2::setsz(int a, int b, int c) //初始化默认值及大小范围
{
    ui->spinBox->setValue(a);
    ui->spinBox->setRange(b,c);
}

void Dialog_2::on_pushButton_clicked()//确定按钮，返送当前尺寸
{
    emit getsz(ui->spinBox->value());
    this->close();
}

void Dialog_2::on_pushButton_2_clicked()
{
    emit getsz(0);
    this->close();
}
