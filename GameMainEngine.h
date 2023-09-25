#pragma once
#include "QBirdDefines.h"
#include "Utilities/ObserverPattern/Observer.h"
#include <qobject.h>
namespace QBird {
    class GameMainEngine : public QObject
    {
        Q_OBJECT
        QBIRD_GAME_SINGLETON(GameMainEngine)

    private:
        void startGameLoop();
        void gameLoop();
        long long gameFrame;
        ObserverPattern::Observer gameStartObserver;
    signals:
        void EndOfOneGameLoopSignal();
    };
};