#include "QBirdEngine.h"
#include "QBirdDefines.h"
#include "GameMainEngine.h"
#include "GameMainWindow.h"
#include <QtWidgets/QApplication>

namespace QBird {
    class QBIRD_GAME_CLASS_NAME
    {
    public:
        QBIRD_GAME_CLASS_NAME()
        {
            //initialization for global logger
            static QBird::Logger logger; // logger must be initialized first
            static QBird::Input input;
            static QBird::GameMainEngine engine;
            mainWindow.gameStartSubject.addObserver(&engine.gameStartObserver);
        }
        void start()
        {
            mainWindow.show();
            mainWindow.gameStartSubject.notify();
        }
    private:
        QBird::GameMainWindow mainWindow;
    };
};

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QBird::QBIRD_GAME_CLASS_NAME game;
    game.start();
    return app.exec();
}
