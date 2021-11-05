#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QNetworkAccessManager>
#include <QStringList>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

    QNetworkAccessManager *netManager;
    QStringList iconList;
    void iconPath();

private:
    Ui::Widget *ui;

public slots:
    void slotGetReplyFinished();
    void slotGetWeatherReplyFinished();
};

#endif // WIDGET_H
