#include "GameMainEngine.h"
#include "QBirdEngine.h"

const QBird::GameMainEngine& QBird::GameMainEngine::instance()
{
    static GameMainEngine engine;
    return engine;
}

QBird::GameMainEngine::GameMainEngine()
    :gameStartObserver(Observer([this]() {this->startGameLoop(); }))
{
    QBird::Logger::LogInfo("Hello from QBird GameMainEngine.");
}

QBird::GameMainEngine::~GameMainEngine()
{
    QBird::Logger::LogInfo("Goodbye from QBird GameMainEngine.");
}

void QBird::GameMainEngine::startGameLoop()
{
    QBird::Logger::LogInfo("Game starts!");
}
