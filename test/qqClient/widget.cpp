#include "widget.h"
#include "ui_widget.h"
#include<QDataStream>
#include<QMessageBox>
#include<QDateTime>
#include<QColorDialog>
#include<QFileDialog>

Widget::Widget(QWidget *parent, QString name) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    myname = name;
    this->port = 8080;
    this->udpSocket = new QUdpSocket(this);
    udpSocket->bind(this->port,QUdpSocket::ShareAddress|QUdpSocket::ReuseAddressHint);

    connect(udpSocket,&QUdpSocket::readyRead,this,&Widget::ReceiveMessage);

    //连接发送按钮
    connect(ui->sendBtn,&QPushButton::clicked,[=](){
        sendMsg(Msg);
    });

    //新用户进入
    sendMsg(UserEnter);

    connect(ui->quitBtn,&QPushButton::clicked,[=](){
        this->close();
    });

    //字体类型
    connect(ui->fontCbx,&QFontComboBox::currentFontChanged,[=](const QFont &font){
        ui->msgTextEdit->setFontFamily(font.toString());
    });

    //字体大小
    void (QComboBox:: * sizebtn)(const QString &text)=&QComboBox::currentTextChanged;
    connect(ui->sizeCbx,sizebtn,[=](const QString &text){
        ui->msgTextEdit->setFontPointSize(text.toDouble());
        ui->msgTextEdit->setFocus();
    });

    //字体加粗
    connect(ui->boldTBtn,&QToolButton::clicked,[=](bool checked){
        if(checked)
        {
            ui->msgTextEdit->setFontWeight(QFont::Bold);
        }
        else {
            ui->msgTextEdit->setFontWeight(QFont::Normal);
        }
    });

    //字体倾斜
     connect(ui->italicTBtn,&QToolButton::clicked,[=](bool checked){
         ui->msgTextEdit->setFontItalic(checked);
         ui->msgTextEdit->setFocus();
     });

     //字体下划线
     connect(ui->undellineTBtn,&QToolButton::clicked,[=](bool checked){
         ui->msgTextEdit->setFontUnderline(checked);
         ui->msgTextEdit->setFocus();
     });

     //清空功能
     connect(ui->clearTBtn,&QToolButton::clicked,[=](){
         ui->msgBrowser->clear();
     });

     connect(ui->colorTBtn,&QToolButton::clicked,[=]{
         QColor color = QColorDialog::getColor(color,this);
         ui->msgTextEdit->setTextColor(color);
     });
     connect(ui->saveTBtn,&QToolButton::clicked,[=](){
         if(ui->msgBrowser->toPlainText().isEmpty())
         {
             QMessageBox::warning(this,"ERROR","保存内容不能为空！");
             return;
         }
         QString filename = QFileDialog::getSaveFileName(this,"保存聊天记录","聊天记录","(*.txt)");
         if(!filename.isEmpty())
         {
             QFile file(filename);
             file.open(QIODevice::WriteOnly|QFile::Text);
             QTextStream stream(&file);
             stream<<ui->msgBrowser->toPlainText();
             file.close();
         }
     });
}

void Widget::closeEvent(QCloseEvent *e)
{
    emit closeWidget();
    sendMsg(UserLeft);
    udpSocket->close();
    udpSocket->destroyed();
    QWidget::closeEvent(e);
}

void Widget::sendMsg(Widget::Msgtype type)
{
    QByteArray array;
    QDataStream stream(&array,QIODevice::WriteOnly);

    stream<<type<<this->getName();

    switch (type) {
    case Msg:
        if(ui->msgTextEdit->toPlainText() == "")
        {
            QMessageBox::warning(this,"ERROR","发送的聊天内容不能为空！");
            return;
        }
        stream<<this->getMsg();
        break;
    case UserEnter:
        break;
    case UserLeft:
        break;
    }
    //书写报文
    udpSocket->writeDatagram(array.data(),array.size(),QHostAddress::Broadcast,this->port);
}

QString Widget::getName()
{
    return this->myname;
}

QString Widget::getMsg()
{
    QString msg= ui->msgTextEdit->toHtml();
    ui->msgTextEdit->clear();
    ui->msgTextEdit->setFocus();
    return msg;
}

void Widget::userEnter(QString username)
{
    bool IsEmpty=ui->tableWidget->findItems(username,Qt::MatchExactly).isEmpty();

        if(IsEmpty)
        {
            QTableWidgetItem *table=new QTableWidgetItem(username);
            ui->tableWidget->insertRow(0);
            ui->tableWidget->setItem(0,0,table);
            ui->msgBrowser->setTextColor(QColor(Qt::gray));
            ui->msgBrowser->append(username+"已上线");
            ui->userNumLbl->setText(QString("在线人数:%1").arg(ui->tableWidget->rowCount()));
            sendMsg(UserEnter);
        }
}

void Widget::userLeft(QString username, QString time)
{
    bool IsEmpty=ui->tableWidget->findItems(username,Qt::MatchExactly).isEmpty();
        if(!IsEmpty)
        {
            int row=ui->tableWidget->findItems(username,Qt::MatchExactly).first()->row();

            ui->tableWidget->removeRow(row);

            ui->msgBrowser->append(QString("%1 用户于%2离开").arg(username).arg(time));

             ui->userNumLbl->setText(QString("在线人数:%1").arg(ui->tableWidget->rowCount()));
        }
}

void Widget::ReceiveMessage()
{
    qint64 size=udpSocket->pendingDatagramSize();
    int mysize = static_cast<int>(size);
    QByteArray *array = new QByteArray(mysize,0);
    udpSocket->readDatagram((*array).data(),size);
    QDataStream stream(array,QIODevice::ReadOnly);
    int mytype;
    QString name,msg;//用户名 聊天内容
    QString time = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
    stream>>mytype;
    switch (mytype) {
        case Msg://普通聊天
            stream>>name>>msg;//流出姓名和聊天内容
            //增加聊天记录
            ui->msgBrowser->setTextColor(QColor(Qt::blue));
            ui->msgBrowser->append("["+name+"]"+time);
            ui->msgBrowser->append(msg);
            break;
        case UserLeft:
            stream>>name;
            userLeft(name,time);
            break;
        case UserEnter:
            stream>>name;
            userEnter(name);
            break;
        }
}

Widget::~Widget()
{
    delete ui;
}
