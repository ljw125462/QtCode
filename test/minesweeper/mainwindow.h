#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
#include <QMouseEvent>
#include <QFont>
#include <QMessageBox>
#include <QScreen>
#include <QDateTime>
#include <QTimer>
#include <QLabel>
#include "dialog.h"
#include "dialog_2.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void fankai(int x0, int y0, int x1, int y1); //翻开方格(x0, y0)
    void fankai8(int x0, int y0, int x1, int y1); //翻开方格(x0, y0)周围的8个方格
    void gameover(); //游戏结束进行操作
    void win(); //胜利进行操作
    void showstat(); //状态栏显示信息
    void setmap(int x0, int y0, int l0); //设置雷区
    void clrnd(); //清除难度打勾
    void clrdx(); //清除方格大小打勾
    bool valid(int x0, int y0); //判断方格(x0, y0)是否有效
    ~MainWindow();

private slots:
    void paintEvent(QPaintEvent*);
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void on_action_triggered(); //11个菜单动作响应事件
    void on_action_1_triggered();
    void on_action_2_triggered();
    void on_action_3_triggered();
    void on_action_4_triggered();
    void on_action_5_triggered();
    void on_action_6_triggered();
    void on_action_7_triggered();
    void on_action_8_triggered();
    void on_action_9_triggered();
    void on_action_10_triggered();
    void setm(int, int, int); //用于自定义设置雷区
    void setsz(int); //用于自定义设置方格大小
    void _timer(); //计时器

private:
    Ui::MainWindow *ui;
    Dialog* dialog = new Dialog(this); //设置雷区对话框
    Dialog_2* dialog_2 = new Dialog_2(this); //设置方格大小对话框
    bool game = false, over = false, Win = false; //分别判断游戏是否开始、结束、胜利
    bool pressl = false, pressr = false, protect = false; //分别代表左右键是否按下，以及是否保护左键
    bool hpre = false, f1 = false; //hpre设置时间是否高精度显示，f1是否执行倒计时代码
    int x, y, dist, lei, count = 0; //存储雷区宽度、高度、方格大小、雷数、翻开的方格数
    int s_w, s_h, t = 0, r; //存储屏幕宽度和高度、当前时间、剩余雷数
    int maxsize, minsize; //方格大小最大值、最小值
    struct grid //方格
    {
        bool bomb = false, fankai = false, biaoji = false; //是否为炸弹、翻开、标雷
        bool highlight = false; //选中时高亮显示
        int num = 0; //方格上的数字
    }** m;
    QDateTime t0;
    QTimer* timer = new QTimer();
    QLabel* label[4]; //下方状态栏四个标签

signals:
    void getm(int, int, int); //将当前数据传给自定义雷区对话框
    void getsz(int, int, int); //将当前数据传给自定义大小对话框
};

#endif // MAINWINDOW_H
