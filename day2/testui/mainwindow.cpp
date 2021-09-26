#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QCompleter>
#include <QStringList>
#include <QMovie>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->myButton->setText("123");


    //connect(ui->myButton, &QPushButton::clicked, this, &MainWindow::close);



    //QLabel
    ui->label_text->setText("^_^"); //设置文本内容

    //设置图片
    ui->label_pic->setPixmap(QPixmap("://LuffyQ.png"));
    //让图片自动适应label大小
    ui->label_pic->setScaledContents(true);

    //进度条
    ui->progressBar->setMinimum(0); //设置最小值
    ui->progressBar->setMaximum(200);//设置最大值
    ui->progressBar->setValue(100); //设置当前值
}

MainWindow::~MainWindow()
{
    delete ui;
}
