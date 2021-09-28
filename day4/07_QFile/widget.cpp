#include "widget.h"
#include "ui_widget.h"
#include<QFile>
#include<QFileDialog>
#include<QFileInfo>
#include<QDateTime>
#include<QDebug>
#include<QDataStream>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_readButton_clicked()
{
    QString path=QFileDialog::getOpenFileName(this,"open","../","TXT(*.txt)");
    if(path.isEmpty()==false)
    {
        //文件对象
        QFile file(path);

        //打开文件 只读方式
        bool isOK = file.open(QIODevice::ReadOnly);
        if(isOK == true)
        {
            #if 0
            //读文件,默认只识别utf-8编码
            QByteArray array = file.readAll();

            //显示到编辑区
            //ui->textEdit->setText(QString(array));
            ui->textEdit->setText(array);
#endif
            QByteArray array;
            while(file.atEnd() == false)
            {
                //读一行
                array += file.readLine();
            }
            ui->textEdit->setText(array);

        }

        file.close();

        //获取文件信息
        QFileInfo info(path);
        qDebug()<<"文件名："<<info.fileName();
        qDebug()<<"文件后缀："<<info.suffix();
        qDebug()<<"文件大小："<<info.size();
        qDebug()<<"文件创建时间："<<info.created().toString("yyyy-MM-dd hh:mm:ss");//2021-9-28 13:11:58
    }


}

void Widget::on_writeButton_clicked()
{
    QString path = QFileDialog::getSaveFileName(this,"save","../","TXT(*.txt)");
    if(path.isEmpty() == false)
    {
        QFile file;//创建文件对象
        file.setFileName(path);//关联文件名字

        //打开文件，只写方式
        bool isOK = file.open(QIODevice::WriteOnly);
        if(isOK == true)
        {
            //获取编辑区内容
            QString str = ui->textEdit->toPlainText();
            //写文件
            //QString转换成QByteArray
            //file.write(str.toUtf8());

            //QString->C++ string ->char *
            //file.write(str.toStdString().data());

            //转换为本地编码
            file.write(str.toLocal8Bit());

            //QString->QByteArray
            QString buf="123";
            QByteArray a = buf.toUtf8();//中文
            a=buf.toLocal8Bit();//本地编码

            //QByteArray->char *
            //char *b=data();

            //char * ->QString
            //char *p="abc";
            //QString c=QString(p);
        }
        file.close();

    }


}
