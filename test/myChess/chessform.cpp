#include "chessform.h"
#include "ui_chessform.h"

ChessForm::ChessForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChessForm)
{
    ui->setupUi(this);

    Init();
}

ChessForm::~ChessForm()
{
    delete ui;
}

void ChessForm::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.drawPixmap(this->rect(),QPixmap("://image/Background1.jpg"));

}

void ChessForm::Init()
{
    QStringList Array;
    Array.append("白子先");
    Array.append("黑子先");
    ui->comboBox->addItems(Array);

    RoleInit(":/image/White.png",":/image/Black.png");

    currentRole = Chess::Empty;

    //申请棋盘类空间
    myChess = new Chess();

    //显示棋盘
    ui->gridLayout1->addWidget(myChess);

}

int ChessForm::judgeRule(int x, int y, void *chess, Chess::ChessType currentRole, bool eatChess)
{
    //棋盘的八个方向
    int dir[8][2]={{1,0},{1,-1},{0,-1},{1,-1},{-1,0},{-1,1},{0,1},{1,1}};
    int temp_x = x,temp_y = y; //临时保存棋盘数组坐标位置
    int i = 0,eatNum = 0; //初始化数据
    typedef  int (*p)[8];  //自定义类型
    p chessFlag = p(chess);    //类型转换
    if(chessFlag[temp_x][temp_y]!=Chess::Empty)
    {
        return 0;
    }
    for (int i = 0;i<8;i++) {
        temp_x += dir[i][0];
        temp_y +- dir[i][1]; //准备判断相邻棋子
        //如果没有出界，且相邻棋子是对方棋子，才有吃子的可能
        if((temp_x<8 && temp_x>=0 && temp_y<8 &&temp_y>=0)
                &&(chessFlag[temp_x][temp_y]!=currentRole)&&(chessFlag[temp_x][temp_y]!=Chess::Empty))
        {
            temp_x += dir[i][0];
            temp_y += dir[i][1];    //继续判断下一个，向前走一步
            while(temp_x < 8&&temp_x>=0&&temp_y<8&&temp_y>=0)
            {
                if(chessFlag[temp_x][temp_y] == Chess::Empty)break;//遇到空位退出
                if(chessFlag[temp_x][temp_y] == currentRole)//找到自己的棋子，代表可以吃子
                {
                    if(eatChess == true)  //确定吃子
                    {
                        chessFlag[x][y] = currentRole; //开始点标志为自己的棋子
                        temp_x = dir[i][0];
                        temp_y = dir[i][1];         //后退一步
                        while((temp_x!=x)||(temp_y!=y))  //只要没有回到开始的位置就执行
                        {
                            chessFlag[temp_x][temp_y] = currentRole;  //标志为自己的棋子
                            temp_x -= dir[i][0];
                            temp_y -= dir[i][1];  //继续后退一步
                            eatNum++;
                        }
                    }
                    else //不吃子，只是判断这个位置能不能吃子
                    {
                        temp_x -= dir[i][0];
                        temp_y -= dir[i][1];
                        while((temp_x!=x)||(temp_y!=y))
                        {
                            temp_x -= dir[i][0];
                            temp_y -= dir[i][1];
                            eatNum++;
                        }
                    }
                    break;//跳出循环
                }//没有找到自己的棋子，就向前走一步
                temp_x += dir[i][0];
                temp_y += dir[i][1];  //向前走一步
            }
        }//如果这个方向不能吃子，就换一个方向
        temp_x = x;
        temp_y = y;
    }
    return eatNum;
}

void ChessForm::RoleInit(const QString WhiteFilename, const QString BlackFilename)
{

    ui->lbl1->setPixmap(QPixmap(WhiteFilename));
    ui->lbl1->setScaledContents(true);

    ui->lbl2->setPixmap(QPixmap(BlackFilename));
    ui->lbl2->setScaledContents(true);

}

void ChessForm::setRole(Chess::ChessType role)
{
    currentRole = role;
    if(role == Chess::Black)
    {
        ui->lbl2->setVisible(true);
        ui->lbl1->setVisible(false);
    }
    else {
        ui->lbl1->setVisible(true);
        ui->lbl2->setVisible(false);
    }
    ui->lcdNumber1->display(0);
    ui->lcdNumber2->display(0);
}

void ChessForm::on_btn_pvp_clicked()
{
    //界面初始化
    if(ui->comboBox->currentText().contains("白"))
    {
        setRole(Chess::White);
    }
    else {
        setRole(Chess::Black);
    }

}
