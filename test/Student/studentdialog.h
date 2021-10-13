#ifndef STUDENTDIALOG_H
#define STUDENTDIALOG_H

#include <QDialog>
#include<QSqlDatabase>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include<QSqlError>
#include<QDebug>
#include<QMessageBox>

namespace Ui {
class StudentDialog;
}

class StudentDialog : public QDialog
{
    Q_OBJECT

public:
    explicit StudentDialog(QWidget *parent = nullptr);
    ~StudentDialog();

private:
    //创建数据库
    void createDB();
    //创建数据表
    void createTable();
    //查询
    void queryTable();

private slots:
    //插入操作槽函数
    void on_insertButton_clicked();

    //删除按钮槽函数
    void on_deleteButton_clicked();

    //修改操作槽函数
    void on_updateButton_clicked();

    //排序按钮槽函数
    void on_SortButton_clicked();

private:
    Ui::StudentDialog *ui;

    QSqlDatabase db;//建立Qt和数据库的连接
    QSqlQueryModel model;//保存查询结果集
};

#endif // STUDENTDIALOG_H
