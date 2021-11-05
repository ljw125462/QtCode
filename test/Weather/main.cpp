#include "widget.h"
#include <QApplication>
#include <QIcon>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.setWindowTitle("天气预报");
    w.setWindowIcon(QIcon(":/image/5.png"));


    w.show();

    return a.exec();
}
