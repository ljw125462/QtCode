#ifndef BOARD_H
#define BOARD_H

#include <QWidget>
#include "stone.h"

class Board : public QWidget
{
    Q_OBJECT

public:
    Board(QWidget *parent = 0);
    ~Board();

    Stone _s[32];
    int _r;//棋子的半径
    QPoint center(int row,int col);//返回棋盘行列对应的像素坐标
    QPoint center(int id);

    void paintEvent(QPaintEvent *);
    void drawStone(QPainter& painter,int id);
};

#endif // BOARD_H
