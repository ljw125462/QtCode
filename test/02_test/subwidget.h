#ifndef SUBWIDGET_H
#define SUBWIDGET_H

#include <QWidget>

class SubWidget : public QWidget
{
    Q_OBJECT
public:
    explicit SubWidget(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *);

signals:

public slots:
};

#endif // SUBWIDGET_H
