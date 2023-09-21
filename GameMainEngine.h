#pragma once
#include "Utilities/noncopyable.h"
#include "Utilities/nonassignable.h"
#include "Utilities/ObserverPattern/Observer.h"
namespace QBird {
    class GameMainEngine
    {
    public:
        NONCOPYABLE(GameMainEngine)
        NONASSIGNABLE(GameMainEngine)
        static const GameMainEngine& instance();
        void startGameLoop();
    public:
        const Observer gameStartObserver;
    private:
        GameMainEngine();
        ~GameMainEngine();
    };
};
