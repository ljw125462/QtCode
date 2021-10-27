﻿#include "board.h"
#include<QPainter>

Board::Board(QWidget *parent)
    : QWidget(parent)
{

}

Board::~Board()
{

}

void Board::paintEvent(QPaintEvent *)
{
    QPainter painter(this);

    int d=40;
    _r=d/2;
    //画十条横线
    for (int i=1;i<=10;i++) {
        painter.drawLine(QPoint(d,i*d),QPoint(9*d,i*d));
    }

    //画九条竖线
    for (int i=1;i<=9;i++) {
        if(i==1 || i==9)
        {
            painter.drawLine(QPoint(i*d,d),QPoint(i*d,10*d));
        }
        else {
            painter.drawLine(QPoint(i*d,d),QPoint(i*d,5*d));
            painter.drawLine(QPoint(i*d,6*d),QPoint(i*d,10*d));
        }
    }
    painter.drawLine(QPoint(4*d,d),QPoint(6*d,3*d));
    painter.drawLine(QPoint(6*d,d),QPoint(4*d,3*d));
    painter.drawLine(QPoint(4*d,8*d),QPoint(6*d,10*d));
    painter.drawLine(QPoint(4*d,10*d),QPoint(6*d,8*d));

    //绘制棋子
    for (int i=0;i<32;i++) {
        drawStone(painter,i);
    }
}

QPoint Board::center(int row,int col)
{
    QPoint ret;
    ret.rx() = (row+1)*_r*2;
    ret.ry() = (col+1)*_r*2;
    return ret;
}

QPoint Board::center(int id)
{
    return center(_s[id]._row,_s[id]._col);
}

//画棋子
void Board::drawStone(QPainter& painter,int id)
{
    QPoint c=center(id);
    QRect rect = QRect(c.x()-_r,c.y()-_r,_r*2,_r*2);
    painter.drawEllipse(center(id),_r,_r);
    painter.drawText(rect, Qt::AlignCenter, _s->getText());
}


