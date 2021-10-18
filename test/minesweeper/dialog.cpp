#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->spinBox->setRange(4, 255); //初始化范围为4到255
    ui->spinBox_2->setRange(4, 255);
}

void Dialog::setm(int x0, int y0, int l0) //初始化默认值
{
    ui->spinBox->setValue(x0);
    ui->spinBox_2->setValue(y0);
    ui->spinBox_3->setValue(l0);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_2_clicked() //取消按钮
{
    this->close();
}

void Dialog::on_pushButton_clicked() //确定按钮
{
    int x1 = ui->spinBox->value();
    int y1 = ui->spinBox_2->value();
    int l1 = ui->spinBox_3->value();
    emit getm(x1, y1, l1);
    this->close();
}

void Dialog::on_spinBox_valueChanged(int) //若宽或高数值改变，则改变雷数范围
{
    int x1 = ui->spinBox->value();
    int y1 = ui->spinBox_2->value();
    ui->spinBox_3->setRange(1, x1 * y1 - 9); //雷数范围为1到当前方格总数减9
}

void Dialog::on_spinBox_2_valueChanged(int)
{
    int x1 = ui->spinBox->value();
    int y1 = ui->spinBox_2->value();
    ui->spinBox_3->setRange(1, x1 * y1 - 9);
}
