#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>
#include "logindlg.h"
#include <QMdiSubWindow>
#include <QStandardItemModel>
#include <QTableView>
#include "scriptdlg.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("基站管理系统");
    setWindowIcon(QIcon("://res/bullet_12.png"));

    mdiArea = new QMdiArea;
    setCentralWidget(mdiArea);//设置窗口中央部件为mdiArea
    mdiArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);//当子窗口移到父窗口外，设置自动具有横向滚动条
    mdiArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);//当子窗口移到父窗口外，设置自动具有纵向滚动条

    createActions();
    createMenus();

    //设置主窗口背景颜色和图片
    mdiArea->setBackground(Qt::NoBrush);
    mdiArea->setStyleSheet("background-image:url(D:/QtCode/test/cdma/res/img_bg_level_4.jpg);");
    //mdiArea->setStyleSheet("border-image:url(D:/QtCode/test/cdma/res/img_bg_level_4.jpg);");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    QMessageBox::StandardButton button = QMessageBox::question(this,"exit","确认退出？",QMessageBox::Yes|QMessageBox::No);
    if(button==QMessageBox::Yes)
    {
        event->accept();//接受退出
    }
    else {
        event->ignore();//忽视退出
    }
}

void MainWindow::createMenus()
{
    adminMenu = menuBar()->addMenu("管理");//建立管理菜单
    adminMenu->addAction(loginAction);
    adminMenu->addAction(logoutAction);
    adminMenu->addSeparator();
    adminMenu->addAction(exitAction);

    dataMenu = menuBar()->addMenu("数据");//建立数据菜单
    dataMenu->addSeparator();//在数据菜单下加入分隔符
    dataMenu->addAction(scriptAction);

    windowMenu = menuBar()->addMenu("窗口");
    windowMenu->addAction(cascadeAction);
    windowMenu->addAction(tileAction);

    helpMenu = menuBar()->addMenu("帮助");
    helpMenu->addAction(helpAction);
    helpMenu->addSeparator();
    helpMenu->addAction(aboutAction);
}

void MainWindow::createActions()
{
    loginAction = new QAction("登录");
    loginAction->setShortcut(tr("Ctrl+u"));
    connect(loginAction,SIGNAL(triggered()),this,SLOT(on_login()));

    logoutAction = new QAction("注销");
    logoutAction->setShortcut(tr("Ctrl+b"));
    connect(logoutAction,SIGNAL(triggered()),this,SLOT(on_logout()));

    exitAction = new QAction("退出");
    exitAction->setShortcut(tr("Ctrl+w"));
    connect(exitAction,SIGNAL(triggered()),this,SLOT(on_exit()));

    scriptAction = new QAction("执行脚本");
    scriptAction->setShortcut(tr("Ctrl+p"));
    connect(scriptAction,SIGNAL(triggered()),this,SLOT(on_script()));

    cascadeAction = new QAction("层叠",this);
    cascadeAction->setShortcut(tr("Ctrl+q"));
    connect(cascadeAction,SIGNAL(triggered()),this,SLOT(cascadeSubWindow()));

    tileAction = new QAction("并列",this);
    tileAction->setShortcut(tr("Ctrl+r"));
    connect(tileAction,SIGNAL(triggered()),this,SLOT(tileSubWindow()));

    helpAction = new QAction("帮助",this);
    helpAction->setShortcut(tr("Ctrl+s"));
    connect(helpAction,SIGNAL(triggered()),this,SLOT(on_help()));

    aboutAction = new QAction("关于",this);
    aboutAction->setShortcut(tr("Ctrl+t"));
    connect(aboutAction,SIGNAL(triggered()),this,SLOT(on_about()));


}

void MainWindow::showsub()
{
    QWidget *w1 = new QWidget;
    w1->setAttribute(Qt::WA_DeleteOnClose);//关闭这个widget的时候，自动释放widget
    w1->setWindowIcon(windowIcon());//设置图标
    mdiArea->addSubWindow(w1);//将widget加入mdiArea，以便widget成为子窗口
    w1->setWindowTitle("SQL");//设置widget标题
    w1->setStyleSheet("border-image:url(D:/QtCode/test/cdma/res/img_bg_level_5.jpg);");
    w1->show();
    mdiArea->activeSubWindow()->resize(width()-100,height()-100);
}

void MainWindow::showView()
{
    QStandardItemModel *model = new QStandardItemModel(5,3);//建立一个五行三列的model

    //设置model列头名称
    model->setHeaderData(0,Qt::Horizontal,"姓名");
    model->setHeaderData(1,Qt::Horizontal,"性别");
    model->setHeaderData(2,Qt::Horizontal,"年龄");
    //设置model每一个单元格的内容
    model->setData(model->index(0,0,QModelIndex()),"雷龙");
    model->setData(model->index(0,1,QModelIndex()),"女");
    model->setData(model->index(0,2,QModelIndex()),"3");
    model->setData(model->index(1,0,QModelIndex()),"雷大炮");
    model->setData(model->index(1,1,QModelIndex()),"未知");
    model->setData(model->index(1,2,QModelIndex()),"999");


    QTableView *view1 = new QTableView;
    view1->setAttribute(Qt::WA_DeleteOnClose);//关闭这个widget的时候，自动释放widget
    view1->setWindowIcon(windowIcon());//设置图标
    mdiArea->addSubWindow(view1);//将widget加入mdiArea，以便widget成为子窗口
    view1->setWindowTitle("SQL");//设置widget标题
    view1->setStyleSheet("border-image:url(D:/QtCode/test/cdma/res/img_bg_level_1.jpg);");

    //view1继承自widget，如果没有model，那么view不会显示任何数据。
    view1->setModel(model);
    view1->show();
    mdiArea->activeSubWindow()->resize(width()-100,height()-100);

}

void MainWindow::on_login()
{
    loginDlg dlg;//将对话框实例化
    dlg.exec();//调用exec产生一个模式对话框

    if(dlg.islogin)//代表用户点击了dlg对话框的登录按钮
    {
        if((dlg.userid == "ljw")&&(dlg.passwd=="123456"))
        {
            QMessageBox::information(this,"提示","登录成功");
        }
        else {
            QMessageBox::information(this,"提示","登录失败");
        }
    }
}

void MainWindow::on_logout()
{
    qDebug()<<"点击了注销";

}

void MainWindow::on_exit()
{
    close();
}

void MainWindow::on_script()
{
    scriptDlg dlg;
    dlg.exec();
    //showView();
}

void MainWindow::cascadeSubWindow()
{
    mdiArea->cascadeSubWindows();
}

void MainWindow::tileSubWindow()
{
    mdiArea->tileSubWindows();
}

void MainWindow::on_help()
{
    qDebug() <<"点击了帮助";
}

void MainWindow::on_about()
{
    QMessageBox::about(this,"关于","版权所有：ljw\n"
                                 "date:2021.10.27");
}
