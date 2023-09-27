#pragma once
#include "QBirdDefines.h"
#include "Utilities/ObserverPattern/Observer.h"
#include <chrono>
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
        std::chrono::system_clock::time_point previousLoopTime;
        std::chrono::system_clock::time_point currentLoopTime;
        std::chrono::microseconds lagTime;
        ObserverPattern::Observer gameStartObserver;
    signals:
        void EndOfOneGameLoopSignal();
    };
};