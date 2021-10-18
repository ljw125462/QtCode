#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void setm(int,int,int);//设置默认值
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
    void on_spinBox_valueChanged(int);
    void on_spinBox_2_valueChanged(int);

private:
    Ui::Dialog *ui;

signals:
    void getm(int,int,int);//将设置的雷区大小发送给主窗口
};

#endif // DIALOG_H
