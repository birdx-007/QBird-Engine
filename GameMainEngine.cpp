#include "GameMainEngine.h"
#include "QBirdEngine.h"

QBird::GameMainEngine::GameMainEngine()
    : gameStartObserver(ObserverPattern::Observer([this]()
        {
            this->startGameLoop();
        }))
    , gameFrame(0)
    , lagTime(std::chrono::microseconds(0))
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
    previousLoopTime = std::chrono::system_clock::now();
    QBird::Logger::LogInfo("Game starts!");
    gameLoop();
}

void QBird::GameMainEngine::gameLoop()
{
    currentLoopTime = std::chrono::system_clock::now();
    auto elapsedTime = std::chrono::duration_cast<std::chrono::microseconds>(currentLoopTime - previousLoopTime);
    previousLoopTime = currentLoopTime;
    lagTime += elapsedTime;
    while (lagTime >= std::chrono::microseconds(QBird::QBIRD_MICROSECOND_PER_UPDATE)) {
        QBird::Logger::LogInfo("Frame " + std::to_string(gameFrame));
        gameFrame++;
        lagTime -= std::chrono::microseconds(QBird::QBIRD_MICROSECOND_PER_UPDATE);
    }
    emit EndOfOneGameLoopSignal();
}
