#include "GameMainEngine.h"
#include "QBirdEngine.h"
#include <qtimer.h>

QBird::GameMainEngine::GameMainEngine()
    :gameStartObserver(ObserverPattern::Observer([this]() 
        {
            this->startGameLoop();
        }))
    ,gameFrame(0)
{
    QBird::Logger::LogInfo("Hello from QBird GameMainEngine.");
}

QBird::GameMainEngine::~GameMainEngine()
{
    QBird::Logger::LogInfo("Goodbye from QBird GameMainEngine.");
}

void QBird::GameMainEngine::startGameLoop()
{
    connect(this, &QBird::GameMainEngine::EndOfOneGameLoopSignal, this, &QBird::GameMainEngine::gameLoop,Qt::QueuedConnection);
    QBird::Logger::LogInfo("Game starts!");
    gameLoop();
}

void QBird::GameMainEngine::gameLoop()
{
    QBird::Logger::LogInfo("Frame " + std::to_string(gameFrame));
    for (int i = 0; i < 10000000; i++);
    gameFrame++;
    emit EndOfOneGameLoopSignal();
}
