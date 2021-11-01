#include "chess.h"
#include "chessform.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    Chess w;
//    w.resize(800,800);
//    w.show();
    ChessForm w;
    w.resize(800,800);
    w.show();
    return a.exec();
}
