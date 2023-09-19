#include "GameMainWindow.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QBird::GameMainWindow w;
    w.show();
    return a.exec();
}
