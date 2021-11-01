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

private:
    Ui::ChessForm *ui;
    Chess *myChess;
    Chess::ChessType currentRole;  //当前谁在下子

    void Init();
    int judgeRule(int x,int y,void *chess,Chess::ChessType currentRole,bool eatChess);

    void RoleInit(const QString WhiteFilename,const QString BlackFilename);
    void setRole(Chess::ChessType role);//设置谁先下

};

#endif // CHESSFORM_H
