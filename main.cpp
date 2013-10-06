#include "nnmain.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NNMain w;
    w.show();

    return a.exec();
}
