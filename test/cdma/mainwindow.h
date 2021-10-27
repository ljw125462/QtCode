#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMenu>
#include <QMenuBar>
#include <QAction>
#include <QCloseEvent>
#include <QMdiArea>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void closeEvent(QCloseEvent *event);

private:
    Ui::MainWindow *ui;
    QMenu *adminMenu;
    QMenu *dataMenu;
    QMenu *windowMenu;
    QMenu *helpMenu;
    QAction *loginAction;
    QAction *logoutAction;
    QAction *exitAction;
    QMdiArea *mdiArea;

    QAction *scriptAction;

    QAction *cascadeAction;
    QAction *tileAction;

    QAction *helpAction;
    QAction *aboutAction;

    void createMenus();
    void createActions();
    void showsub();
    void showView();

public slots:
        //管理页槽函数
        void on_login();
        void on_logout();
        void on_exit();
        //数据页槽函数
        void on_script();
        //窗口页槽函数
        void cascadeSubWindow();
        void tileSubWindow();
        //帮助页槽函数
        void on_help();
        void on_about();

};

#endif // MAINWINDOW_H
