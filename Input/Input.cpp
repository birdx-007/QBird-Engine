#include "Input.h"
#include "../QBirdEngine.h"

void QBird::Input::keyPressed(Qt::Key key)
{
    QBird::Logger::Log("Press key " + std::to_string(key) + '\n');
}

void QBird::Input::keyReleased(Qt::Key key)
{
    QBird::Logger::Log("Release key " + std::to_string(key) + '\n');
}
