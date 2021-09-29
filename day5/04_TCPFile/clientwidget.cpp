#include "clientwidget.h"
#include "ui_clientwidget.h"
#include<QDebug>
#include<QMessageBox>
#include<QHostAddress>

ClientWidget::ClientWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ClientWidget)
{
    ui->setupUi(this);

    tcpSocket = new QTcpSocket(this);

    isStart = true;

    connect(tcpSocket,&QTcpSocket::readyRead,[=]()
    {
        //取出接收的内容
        QByteArray buf = tcpSocket->readAll();
        if(true == isStart)
        {
            //接收头
            isStart = false;
            //解析头部信息 buf="hello##1024"
            //初始化
            fileName = QString(buf).section("##",0,0);
            fileSize = QString(buf).section("##",1,1).toInt();
            recvSize = 0;

            //打开文件
            file.setFileName(fileName);
            bool isOK = file.open(QIODevice::WriteOnly);
            if(false == isOK)
            {
                qDebug()<<"WriteOnly Error 34";
                tcpSocket->disconnectFromHost(); //断开连接
                tcpSocket->close(); //关闭套接字

                return; //如果打开文件失败，中断函数
            }
        }
        else
        {
            //文件信息
            qint64 len = file.write(buf);
            recvSize += len;

            if(recvSize == fileSize)
            {
                file.close();
                QMessageBox::information(this,"完成","文件接收完成");
                tcpSocket->disconnectFromHost();
                tcpSocket->close();

            }
        }
    });
}

ClientWidget::~ClientWidget()
{
    delete ui;
}

void ClientWidget::on_ButtonConnect_clicked()
{
    //获取服务器的IP和端口
    QString ip = ui->lineEditIP->text();
    quint16 port = ui->lineEditPort->text().toInt();

    tcpSocket->abort();
    tcpSocket->connectToHost(QHostAddress(ip),port);
}
