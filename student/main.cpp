#include "logscreen.h"
#include <QApplication>
#include<QTextCodec>

int main(int argc, char *argv[])
{
    QTextCodec *codec = QTextCodec::codecForName("UTF-8");//或者"GBK",不分大小写

    QTextCodec::setCodecForLocale(codec);

    QApplication a(argc, argv);
    LogScreen w;
    w.show();

    return a.exec();
}
