#include "QBirdEngine.h"
#include "GameMainEngine.h"
#include "GameMainWindow.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    //initialization for global logger
    QBird::Logger::instance();
    QBird::Input::instance();
    QBird::GameMainWindow window(&QBird::GameMainEngine::instance().gameStartObserver);
    window.show();
    return app.exec();
}
