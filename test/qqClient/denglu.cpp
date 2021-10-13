#include "denglu.h"
#include "ui_denglu.h"
#include<QIcon>
#include<QToolButton>

denglu::denglu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::denglu)
{
    ui->setupUi(this);

    this->setFixedSize(300,700);

    //设置图标
    this->setWindowIcon(QIcon("://images/qq.png"));
    //设置窗口名称
    this->setWindowTitle("QQ 666");

    QList<QString> nameList;
    nameList<<"雷"<<"雷大炮"<<"雷龙"<<"雷二炮"<<"水货"<<"油与"<<"炮龙"<<"大炮"<<"二炮";
    QStringList iconNameList;//图标资源列表
    iconNameList << "spqy"<< "ymrl" <<"qq" <<"Cherry"<< "dr"<<"jj"<<"lswh" << "qmnn"<< "spqy" ;


    for (int i =0;i<9;i++) {
        QToolButton * btn=new QToolButton(this);
        //加载头像图片
        btn->setIcon(QPixmap(QString(":/images/%1.png").arg(iconNameList[i]) ));
        //加载图片大小
        btn->setIconSize(QPixmap(QString(":/images/%1.png").arg(iconNameList[i]) ).size());
        //设置网名
        btn->setText(QString("%1").arg(nameList[i]));
        //设置背景透明
        btn->setAutoRaise(true);
        //设置布局格式
        btn->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        //放到clayout布局中
        ui->vLayout->addWidget(btn);

    }

}

denglu::~denglu()
{
    delete ui;
}
