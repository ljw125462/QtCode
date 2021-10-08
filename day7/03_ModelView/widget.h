#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QSqlTableModel>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_ButtonAdd_clicked();

    void on_ButtonSure_clicked();

    void on_ButtonDelete_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::Widget *ui;
    QSqlTableModel *model;
};

#endif // WIDGET_H
