#include "QBirdEngine.h"
#include "QBirdDefines.h"
#include "GameMainEngine.h"
#include "GameMainWindow.h"
#include "Utilities/ObserverPattern/Subject.h"
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
            gameStartSubject.addObserver(&engine.gameStartObserver);
        }
        void start()
        {
            mainWindow.show();
            gameStartSubject.notify();
        }
    private:
        QBird::GameMainWindow mainWindow;
        ObserverPattern::Subject gameStartSubject;
    };
};

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QBird::QBIRD_GAME_CLASS_NAME game;
    game.start();
    return app.exec();
}
