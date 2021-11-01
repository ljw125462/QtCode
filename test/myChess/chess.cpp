#include "chess.h"
#include <QDebug>

Chess::Chess(QWidget *parent)
    : QWidget(parent)
{
    Init();
    //InitChess();
}

Chess::~Chess()
{

}

void Chess::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QRect rec;
    rec.setTopLeft(QPoint(0,0));
    rec.setBottomRight(QPoint(this->width(),this->height()));
    QPixmap pix;
    pix.load(bg_filename);
    //pix.load("://image/Background.jpg");
    painter.drawPixmap(rec,pix);

    //画线
    QPen pen1;
    pen1.setColor(lineColor);
    pen1.setStyle(Qt::SolidLine);
    pen1.setWidth(2);
    painter.setPen(pen1);
    for (int i = 0;i<9;i++) {
        painter.drawLine(startX,startY*(1+i),9*gridWidth,gridHeight*(1+i));
        painter.drawLine(startX*(1+i),startY,gridWidth*(1+i),gridHeight*9);
    }

    //画棋子
    QString chessFilename;
    for (int i = 0;i<9;i++) {
        for (int j= 0;j<9;j++) {
            if(ChessData[i][j] == White)
            {
                chessFilename = ":/image/White.png";
            }
            else if (ChessData[i][j] == Black) {
                chessFilename = ":/image/Black.png";
            }
            else {
                chessFilename.clear();
                continue;
            }
            painter.drawPixmap(startX*(1+i)-gridWidth,startY*(1+j)-gridHeight,gridWidth,gridHeight,QPixmap(chessFilename));
        }
    }
}

void Chess::resizeEvent(QResizeEvent *event)
{
    gridWidth = event->size().width()/GRIDCOUNT;
    gridHeight = event->size().height()/GRIDCOUNT;
    startX = gridWidth;
    startY = gridHeight;
}

void Chess::mousePressEvent(QMouseEvent *event)
{
    int x = event->x();
    int y = event->y();
    if(x>=startX && (x <= startX+8*gridWidth))
    {
        if(y>=startY && (y<=startY + 8*gridHeight))
        {
            int i = 0;
            int j = 0;
            i = x/gridWidth;
            j = y/gridHeight;
//            qDebug() <<"i:"<<i<<"j:"<<j;
//            ChessData[i][j] = Black;
//            update();
            SignalSendChessData(i,j);
        }
    }

}

void Chess::ChangeLineColor(const QColor color)
{
    lineColor = color;
    this->update();
}

void Chess::setChessStatus(void *p)
{
    memcpy(ChessData,p,sizeof(int)*9*9);
    this->update();
}

void Chess::Init()
{
    bg_filename.clear();
    bg_filename = "://image/Background.jpg";
    lineColor = Qt::red;

}

void Chess::InitChess()
{
    //初始化棋盘数据
    //memset(ChessData,0,sizeof (int)*81);
    for (int i = 0;i<9;i++) {
        for (int j= 0;j<9;j++) {
            ChessData[i][j]=Empty;
        }
    }
}
