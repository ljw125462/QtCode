#include "mainwindow.h"
#include<QMenuBar>
#include<QMenu>
#include<QAction>
#include<QDebug>
#include<QToolBar>
#include<QPushButton>
#include<QStatusBar>
#include<QLabel>
#include<QTextEdit>
#include<QDockWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    resize(300,300);
    //菜单栏
    QMenuBar *mBar=menuBar();

    //添加菜单
    QMenu * pFile=mBar->addMenu("文件");

    //添加菜单项，添加动作
    QAction *pNew = pFile->addAction("新建");

    connect(pNew,&QAction::triggered,
            [=]()
    {
        qDebug()<<"新建被按下";
    });

    pFile->addSeparator();//添加分割线
    QAction *pOpen = pFile->addAction("打开");
    connect(pOpen,&QAction::triggered,
            [=]()
    {
        qDebug()<<"打开被按下";
    });

    //工具栏，菜单栏的快捷方式
    QToolBar *toolBar=addToolBar("toolBar");

    //工具栏添加快捷键
    toolBar->addAction(pNew);
    QPushButton *b=new QPushButton(this);
    b->setText("0.0");

    //添加小控件
    toolBar->addWidget(b);
    connect(b,&QPushButton::clicked,[=](){
        b->setText("666");
    });

    //状态栏
    QStatusBar *sBar=statusBar();
    QLabel * label=new QLabel(this);
    label->setText("Normal text file");
    sBar->addWidget(label);

    // addWidget 从左往右添加
    sBar->addWidget(new QLabel("2",this));
    //addPermanentWidget 从右往左添加
    sBar->addPermanentWidget(new QLabel("就绪",this));

    //核心控件
    QTextEdit *tEdit=new QTextEdit(this);
    setCentralWidget(tEdit);

    //浮动窗口
    QDockWidget *dock=new QDockWidget(this);
    addDockWidget(Qt::RightDockWidgetArea,dock);
    //在浮动窗口中添加核心控件
    QTextEdit *testEdit=new QTextEdit(this);
    dock->setWidget(testEdit);
}

MainWindow::~MainWindow()
{

}
