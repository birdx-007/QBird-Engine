#pragma once
#include "QBirdDefines.h"
#include "Utilities/ObserverPattern/Observer.h"
namespace QBird {
    class GameMainEngine
    {
        QBIRD_GAME_SINGLETON(GameMainEngine)

    private:
        void startGameLoop();
        ObserverPattern::Observer gameStartObserver;
    };
};
