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
                //查找最后一个子节点
                QDomElement lastEmt = root.lastChildElement();
                if(lastEmt.attribute("date") == dateStr)
                {
                    writeXML(doc,lastEmt,list);
                }
                else
                {
                    //创建日期子节点
                    QDomElement dateEmt = doc.createElement("日期");
                    //创建date属性
                    QDomAttr dateAttr = doc.createAttribute("date");
                    //设置属性的值
                    dateAttr.setNodeValue(dateStr);
                    //节点和属性关联
                    dateEmt.setAttributeNode(dateAttr);

                    //把日期节点追加到根节点上
                    root.appendChild(dateEmt);

                    //写有效数据
                    writeXML(doc,dateEmt,list);
                }
            }
            else
            {
                //创建日期子节点
                QDomElement dateEmt = doc.createElement("日期");
                //创建date属性
                QDomAttr dateAttr = doc.createAttribute("date");
                //设置属性的值
                dateAttr.setNodeValue(dateStr);
                //节点和属性关联
                dateEmt.setAttributeNode(dateAttr);

                //把日期节点追加到根节点上
                root.appendChild(dateEmt);

                //写有效数据
                writeXML(doc,dateEmt,list);
            }

            //保存文件
            isOK = file.open(QIODevice::WriteOnly);
            if(isOK)
            {
                QTextStream stream(&file);
                doc.save(stream,4);
                file.close();
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

void DomXML::writeXML(QDomDocument &doc, QDomElement &root, QStringList &list)
{
    //当前时间获取
    QDateTime time = QDateTime::currentDateTime();
    QString timeStr = time.toString("hh-mm-ss");

    //创建时间元素节点
    QDomElement timeEmt = doc.createElement("时间");
    QDomAttr timeAttr = doc.createAttribute("time");

    //给属性设置值
    timeAttr.setNodeValue(timeStr);

    //时间节点元素和属性关联
    timeEmt.setAttributeNode(timeAttr);
    //把时间节点加到日期节点后
    root.appendChild(timeEmt);

    QDomElement factory = doc.createElement("厂家");
    QDomElement brand = doc.createElement("品牌");
    QDomElement price = doc.createElement("报价");
    QDomElement num = doc.createElement("数量");
    QDomElement total = doc.createElement("金额");

    QDomText text = doc.createTextNode(list.at(0));
    factory.appendChild(text);
    text = doc.createTextNode(list.at(1));
    brand.appendChild(text);
    text = doc.createTextNode(list.at(2));
    price.appendChild(text);
    text = doc.createTextNode(list.at(3));
    num.appendChild(text);
    text = doc.createTextNode(list.at(4));
    total.appendChild(text);

    timeEmt.appendChild(factory);
    timeEmt.appendChild(brand);
    timeEmt.appendChild(price);
    timeEmt.appendChild(num);
    timeEmt.appendChild(total);
}

void DomXML::readXML(QString filePath, QStringList &factorylist, QStringList &brandlist, QStringList &pricelist, QStringList &numlist, QStringList &totallist)
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
            //获取根节点
            QDomElement root = doc.documentElement();
            file.close();

            QDateTime date = QDateTime::currentDateTime();
            QString dateStr = date.toString("yyyy-MM-dd");

            if(root.hasChildNodes())//有无子节点
            {
                //找最后一个子节点
                QDomElement lastEmt = root.lastChildElement();
                if(lastEmt.attribute("date") == dateStr)//判断有无当天日期
                {
                    //找出当前日期下所有时间的子节点
                    QDomNodeList list = lastEmt.childNodes();
                    for (int i = 0;i<list.size();i++) {
                        //list.at(0).toElement();
                        //转换为元素，找到时间节点下的所有子节点
                        QDomNodeList sublist = list.at(i).toElement().childNodes();
                        //厂家
                        QString factory = sublist.at(0).toElement().text();
                        factorylist.append(factory);
                        //品牌
                        QString brand = sublist.at(1).toElement().text();
                        brandlist.append(brand);
                        //报价
                        QString price = sublist.at(2).toElement().text();
                        pricelist.append(price);
                        //数量
                        QString num = sublist.at(3).toElement().text();
                        numlist.append(num);
                        //总价
                        QString total = sublist.at(4).toElement().text();
                        totallist.append(total);
                    }
                }
                else
                {
                    cout<<"没有当天数据";
                    return;
                }
            }
            else
            {
                cout<<"没有子节点";
            }
        }
        else
        {
            cout << "setContent Error";
            return;
        }
    }
    else
    {
        cout << "ReadOnly Error";
        return;
    }
}
