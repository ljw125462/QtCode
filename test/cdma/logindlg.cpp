#include "logindlg.h"
#include <QGridLayout>
#include <QPalette>
#include <QIcon>
#include <QDebug>

loginDlg::loginDlg(QWidget *parent) :
    QDialog(parent)
{
    islogin = false;//意味着islogin在对话框初始化的时候值为false

    label0 = new QLabel;
    label0->setText("用户名:");

    label1 = new QLabel;
    label1->setText("密码:");

    label2 = new QLabel;
    label2->setText("数据库名称:");

    label3 = new QLabel;
    label3->setText("服务器IP:");

    lineEditUserID = new QLineEdit;
    lineEditPasswd = new QLineEdit;
    lineEditPasswd->setEchoMode(QLineEdit::PasswordEchoOnEdit);//设置为密码显示
    lineEditDBName = new QLineEdit;
    lineEditHostIP = new QLineEdit;

    loginBtn = new QPushButton;
    loginBtn->setText("登录");
    logoutBtn = new QPushButton;
    logoutBtn->setText("取消");

    //构造函数需要写this
    QGridLayout *layout1 = new QGridLayout(this);
    layout1->addWidget(label0,0,0);
    layout1->addWidget(lineEditUserID,0,1);

    layout1->addWidget(label1,1,0);
    layout1->addWidget(lineEditPasswd,1,1);

    layout1->addWidget(label2,2,0);
    layout1->addWidget(lineEditDBName,2,1);

    layout1->addWidget(label3,3,0);
    layout1->addWidget(lineEditHostIP,3,1);

    layout1->addWidget(loginBtn,4,0);
    layout1->addWidget(logoutBtn,4,1);

    layout1->setColumnStretch(0,1);//设置0列
    layout1->setColumnStretch(1,1);//设置1列

    this->setWindowTitle("登录");
    setWindowIcon(QIcon("://res/bullet_3.png"));

    layout1->setMargin(15);//设置边距
    layout1->setSpacing(10);//设置控件间的间隔
    layout1->setSizeConstraint(QLayout::SetFixedSize);

    connect(loginBtn,SIGNAL(clicked()),this,SLOT(loginBtnOnclick()));
    connect(logoutBtn,SIGNAL(clicked()),this,SLOT(logoutBtnOnclick()));
    lineEditUserID->setFocus();//设置lineEditUserID控件具有输入焦点

    setAutoFillBackground(true);
    QPalette palette;
    palette.setBrush(QPalette::Background,QBrush(QPixmap("://res/img_bg_level_2.jpg")));
    setPalette(palette);
}

void loginDlg::loginBtnOnclick()
{
    qDebug() <<"点击了登录按钮";
    this->userid = lineEditUserID->text();
    this->passwd = lineEditPasswd->text();
    this->dbname = lineEditDBName->text();
    this->hostip = lineEditHostIP->text();
    islogin = true;
    close();
}

void loginDlg::logoutBtnOnclick()
{
    close();
}
