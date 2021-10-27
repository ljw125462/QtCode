#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QPainter>
#include<QPaintEvent>
#include<QMouseEvent>
#include<QVector>
#include"chessitem.h"
#include<QMessageBox>


#define CHESS_R 15
#define CHESS_C 15
#define MAX_X 50
#define MAX_Y 50


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    void paintEvent(QPaintEvent *evevt);
    void mousePressEvent(QMouseEvent *event);

private:
    void InitUI();
    void drawChessBoard();//棋盘
    void DrawHandChess();//鼠标上的棋子
    void DrawChessItem();//绘制棋盘上的棋子
    void DrawChessAtPoint(QPainter &painter,QPoint &point);
    int CountNearItem(ChessItem item,QPoint pt);

private:
    Ui::MainWindow *ui;
    bool b_black;
    QVector<ChessItem> p_ChessItem;//定义棋子个数
};

#endif // MAINWINDOW_H
