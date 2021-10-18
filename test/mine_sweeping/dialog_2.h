#ifndef DIALOG_2_H
#define DIALOG_2_H

#include <QDialog>

namespace Ui {
class Dialog_2;
}

class Dialog_2 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_2(QWidget *parent = nullptr);
    ~Dialog_2();

private slots:
    void setsz(int, int, int); //设置默认值
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::Dialog_2 *ui;

signals:
    void getsz(int); //将设置的方格大小发送给主窗口
};

#endif // DIALOG_2_H
