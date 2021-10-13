#include "serverdialog.h"
#include "ui_serverdialog.h"

ServerDialog::ServerDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ServerDialog)
{
    ui->setupUi(this);
    //当有客户端想服务器发送连接请求时，发送信号
    connect(&tcpServer,SIGNAL(newconnection()),this,SLOT(onNewConnection()));
    //定时器到时发送信号：timeout
    connect(&timer,SIGNAL(timeout()),SLOT(onTimeout()));
}

ServerDialog::~ServerDialog()
{
    delete ui;
}

//创建服务器对顶槽函数
void ServerDialog::on_createButton_clicked()
{
    //获取服务器端口
    port = ui->portEdit->text().toShort();
    //设置服务器IP端口
    if(tcpServer.listen(QHostAddress::Any,port)==true)
    {
        qDebug()<<"创建服务器成功！";
        //禁用“创建服务器”按钮和端口输入
        ui->createButton->setEnabled(false);
        ui->portEdit->setEnabled(false);
        //开启定时器
        timer.start(3000);
    }
    else {
        qDebug()<<"创建服务器失败";
    }

}

void ServerDialog::onNewConnection()
{
    //获取和客户端通信的套接字
    QTcpSocket* tcpClient = tcpServer.nextPendingConnection();
    //保存套接字到容器
    tcpClientList.append(tcpClient);
    //当客户端给服务器发送消息是，通信套接字发送信号：ReadyRead
    connect(tcpClient,SIGNAL(readyRead()),this,SLOT(onReadyRead()));

}

void ServerDialog::onReadyRead()
{
    //遍历容器 哪个客户端给服务器发送了消息
    for (int i = 0;i<tcpClientList.size();i++)
    {
        //bytesAvailable获取当前套接字等待读取消息字节数
        //返回0表示没有消息
        //返回>0，说明当前套接字有消息到来
        if(tcpClientList.at(i)->bytesAvailable())
        {
            //读取消息并保存
            QByteArray buf = tcpClientList.at(i)->readAll();
            //显示聊天消息
            ui->listWidget->addItem(buf);
            ui->listWidget->scrollToBottom();
            //转发消息给所有 在线客户端
            sendMessage(buf);
        }
    }
}

//转发聊天消息给其他客户端
void ServerDialog::sendMessage(const QByteArray &buf)
{
    for (int i = 0;i<tcpClientList.size();i++) {
        tcpClientList.at(i)->write(buf);
    }
}

//定时器到时候执行槽函数
void ServerDialog::onTimeout()
{
    //遍历检查容器中保存的客户端通信套接字是否已经断开连接。如果是则删除
    for (int i = 0;i<tcpClientList.size();i++) {
        if(tcpClientList.at(i)->state()==QAbstractSocket::UnconnectedState)
        {
            tcpClientList.removeAt(i);
            --i;
        }
    }
    //容器


}
