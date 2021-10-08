#include "domxml.h"
#include<QFile>
#include<QDomDocument> //文件
#include<QDomProcessingInstruction> //格式头部
#include<QDomElement>
#include<QTextStream>
#include<QDebug>
#include<QDateTime>
#define cout qDebug() <<"["<<__FILE__<<":"<<__LINE__<<"]"

DomXML::DomXML()
{

}

//创建xml空文件
void DomXML::createXML(QString filePath)
{
    QFile file(filePath);//关联文件名字
    if(true == file.exists())//如果存在就不创建
    {
        cout<<"文件已经存在！";
        return;
    }
    else//不存在，创建
    {
        //只写方式打开文件
        bool isOK = file.open(QIODevice::WriteOnly);
        if(true == isOK)//打开成功
        {
            //创建xml文档
            QDomDocument doc;
            //创建xml格式头部
            QDomProcessingInstruction ins;
            ins =doc.createProcessingInstruction("xml","version=\'1.0\' encoding\='utf-8\'");
            //追加元素
            doc.appendChild(ins);
            //根节点元素
            QDomElement root= doc.createElement("日销售清单");
            doc.appendChild(root);

            //保存
            QTextStream stream(&file);//文本流关联文件
            doc.save(stream,4);//4 缩进字符
            file.close();

        }
        else
        {
            cout <<"WriteOnly Error";
            return;
        }
    }

}

void DomXML::appendXML(QString filePath, QStringList list)
{
    QFile file(filePath);
    bool isOK = file.open(QIODevice::ReadOnly);
    if(true == isOK)//打开成功
    {
        //file和xml文档关联
        QDomDocument doc;
        isOK = doc.setContent(&file);
        if(true == isOK)  //关联成功
        {
            file.close();
            QDomElement root = doc.documentElement();

            //获取当前时间
            QDateTime date = QDateTime::currentDateTime();
            QString dateStr = date.toString("yyyy-MM-dd");

            //判断根节点下有没有子节点
            if(root.hasChildNodes())  //如果有子节点
            {

            }
            else
            {
                //创建日期子节点
            }
        }
        else
        {
            cout<<"setContent Error";
            return;
        }

    }
    else
    {
        cout <<"ReadOnly Error";
        return;
    }




}
