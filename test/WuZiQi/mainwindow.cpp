#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    InitUI();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *evevt)
{
    drawChessBoard();
    DrawHandChess();
    DrawChessItem();
    update();
}

void MainWindow::InitUI()
{
    //定义棋盘的大小
    this->setFixedSize((CHESS_C+1)*MAX_X,(CHESS_R+1)*MAX_Y);
    this->setWindowTitle("无籽旗");
    b_black = false;

}

void MainWindow::drawChessBoard()
{
    QPainter painter(this);//绘图工具
    painter.setRenderHint(QPainter::HighQualityAntialiasing,true);//防止棋盘变形
    painter.setPen(QPen(QColor(Qt::black),2));
    painter.setBrush(Qt::yellow);//棋盘格子颜色
    for (int i = 0;i<CHESS_C;i++) {
        for (int j = 0;j<CHESS_R;j++) {
            painter.drawRect((i+0.5)*MAX_X,(0.5+j)*MAX_Y,MAX_X,MAX_Y);
        }
    }


}

void MainWindow::DrawHandChess()
{
    QPainter painter(this);
    painter.setPen(QPen(QColor(Qt::transparent)));//给棋子的边框线透明
    if(b_black)
    {
        painter.setBrush(Qt::black);
    }
    else {
        painter.setBrush(Qt::white);
    }
    painter.drawEllipse(mapFromGlobal(QCursor::pos()),MAX_X/2,MAX_Y/2);

}

void MainWindow::DrawChessItem()
{
    QPainter painter(this);
    painter.setPen(QPen(QColor(Qt::transparent)));
    painter.setBrush(Qt::black);
//    painter.drawEllipse(65,65,25,25);
    for (int i = 0;i<p_ChessItem.size();i++) {
        ChessItem item = p_ChessItem[i];
        if(item._black)
        {
            painter.setBrush(Qt::black);
        }
        else {
            painter.setBrush(Qt::white);
        }

    }

}

void MainWindow::DrawChessAtPoint(QPainter &painter, QPoint &point)
{
    QPoint ptCenter((point.x()+0.5)*MAX_X,(point.y()+0.5)*MAX_Y);//获取棋子的摆放位置
    painter.drawEllipse(ptCenter,MAX_X/2,MAX_Y/2);

}

int MainWindow::CountNearItem(ChessItem item, QPoint pt)
{
    int nCount = 0;

    item._pt += pt;
    while (p_ChessItem.contains(item)) {
        nCount++;
        item._pt=pt;
    }
    return nCount;

}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    //获取鼠标点击的位置
    qDebug() <<event->pos()<<endl;

    QPoint pt;
    pt.setX((event->pos().x())/MAX_X);
    pt.setY((event->pos().y())/MAX_Y);

    //判断棋子是否存在
    for (int i =0;i<p_ChessItem.size();i++) {
        ChessItem item = p_ChessItem[i];
        if(item._pt == pt)
        {
            return;//如果存在就不做任何显示
        }
    }

    //如果不存在 我们就要进行绘制并且判断无籽是否连接
    ChessItem item(pt,b_black);
    p_ChessItem.append(item);

    //统计四个点位是否连接
    int nLeft = CountNearItem(item,QPoint(-1,0));
    int nLeftUp = CountNearItem(item,QPoint(-1,-1));
    int nUp = CountNearItem(item,QPoint(0,-1));
    int nRight = CountNearItem(item,QPoint(0,1));
    int nRightUp = CountNearItem(item,QPoint(1,-1));
    int nRightDown = CountNearItem(item,QPoint(1,1));
    int nLeftDown = CountNearItem(item,QPoint(-1,1));
    int nDown = CountNearItem(item,QPoint(0,1));

    if((nLeft+nRight) >= 4 ||
        (nLeftUp+nRightDown)>=4||
            (nUp+nDown)>=4||
            (nRightUp+nLeftDown)>=4)
    {
        QString str = b_black?"Black Victory":"White Victory";
        QMessageBox::information(NULL,"GAME OVER",str,QMessageBox::Yes);
        p_ChessItem.clear();
        return;
    }

    //下一方下棋
    b_black = !b_black;

}

