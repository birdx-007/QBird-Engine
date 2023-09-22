#include "GameMainEngine.h"
#include "QBirdEngine.h"

QBird::GameMainEngine::GameMainEngine()
    :gameStartObserver(ObserverPattern::Observer([this]() {this->startGameLoop(); }))
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
