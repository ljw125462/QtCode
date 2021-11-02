#ifndef WIDGET_H
#define WIDGET_H
#define GRIDCOUNT 10

#include <QWidget>
#include <QPaintEvent>
#include <QPainter>
#include <QResizeEvent>
#include <QMouseEvent>

class Chess : public QWidget
{
    Q_OBJECT

public:
    Chess(QWidget *parent = 0);
    ~Chess();
    //棋子类型
    enum ChessType{Empty=0,White,Black};

    //外部调用改变
    void ChangeLineColor(const QColor color);

    //改变棋盘的显示值
    void setChessStatus(void *p);

protected:
    void paintEvent(QPaintEvent *);
    void resizeEvent(QResizeEvent *event);
    void mousePressEvent(QMouseEvent *event);

private:
    QString bg_filename;
    QColor lineColor;

    //格子宽高，画线起始点
    int gridWidth,gridHeight,startX,startY;

    int ChessData[8][8];

    void Init();
    void InitChess();

signals:
    void SignalSendChessData(int i, int j);//发送点击的坐标
};

#endif // WIDGET_H
