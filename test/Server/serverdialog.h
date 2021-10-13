#ifndef SERVERDIALOG_H
#define SERVERDIALOG_H

#include <QDialog>
#include<QTcpServer>
#include<QTcpSocket>
#include<QDebug>
#include<QTimer>

namespace Ui {
class ServerDialog;
}

class ServerDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ServerDialog(QWidget *parent = nullptr);
    ~ServerDialog();

private slots:
    void on_createButton_clicked();

    //响应客户端连接请求的槽函数
    void onNewConnection();
    //接收客户端消息槽函数
    void onReadyRead();
    //转发聊天消息给其他客户端
    void sendMessage(const QByteArray& buf);

    //定时器到时后执行槽函数
    void onTimeout(void);

private:
    Ui::ServerDialog *ui;
    QTcpServer tcpServer;
    qint16 port;//服务器端口
    QList<QTcpSocket*> tcpClientList;//容器，保存所有和客户端通信的套接字
    QTimer timer;//定时器
};

#endif // SERVERDIALOG_H
