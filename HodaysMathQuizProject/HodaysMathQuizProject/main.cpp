#include "blank.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Blank w;
    w.show();

    return a.exec();
}
