#include "QBirdEngine.h"
#include "GameMainWindow.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    //initialization for global logger
    QBird::Logger::instance(); 
    QBird::Input::instance();
    QBird::GameMainWindow window;
    window.show();
    return app.exec();
}
