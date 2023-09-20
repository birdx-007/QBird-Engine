#include "QBirdEngine.h"
#include "GameMainWindow.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QBird::Logger::instance(); //initialization for global logger
    QBird::GameMainWindow window(&QBird::Input::instance());
    window.show();
    return app.exec();
}
