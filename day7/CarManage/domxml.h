#ifndef DOMXML_H
#define DOMXML_H
#include<QString>
#include<QStringList>


class DomXML
{
public:
    DomXML();
    static void createXML(QString filePath);//创建xml空文件
    static void appendXML(QString filePath,QStringList list);
};

#endif // DOMXML_H
