#ifndef CHESSFORM_H
#define CHESSFORM_H

#include <QWidget>
#include "chess.h"
#include <QPainter>

namespace Ui {
class ChessForm;
}

class ChessForm : public QWidget
{
    Q_OBJECT

public:
    explicit ChessForm(QWidget *parent = nullptr);
    ~ChessForm();

protected:
    void paintEvent(QPaintEvent *);

private slots:
    void on_btn_pvp_clicked();

    //处理棋盘发送的信号
    void doProcessChessData(int i,int j);

    void on_btn_pve_clicked();

private:
    Ui::ChessForm *ui;
    enum PkType{PVP,PVE,NVN};

    Chess *myChess;
    Chess::ChessType currentRole;  //当前谁在下子
    int form_ChessData[8][8];
    PkType currentPK;

    void Init();
    int judgeRule(int x,int y,void *chess,Chess::ChessType currentRole,bool eatChess);

    void RoleInit(const QString WhiteFilename,const QString BlackFilename);
    void setRole(Chess::ChessType role);//设置谁先下
    void setChessInit();//对棋盘初始化

    void RoleChange();//角色切换

    void ChessShow();//数据统计

    void RebortRole(Chess::ChessType role);//机器下子

};

#endif // CHESSFORM_H
