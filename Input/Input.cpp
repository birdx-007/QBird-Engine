#include "Input.h"
#include "QBirdEngine.h"
#include <qkeysequence.h>

QBird::Input& QBird::Input::instance()
{
    static Input input;
    return input;
}

QBird::Input::Input()
{
}

QBird::Input::~Input()
{
}

void QBird::Input::keyPressed(const Qt::Key& key)
{
    QBird::Logger::LogInfo("Press key " + QKeySequence(key).toString().toStdString());
}

void QBird::Input::keyPressed(const int& key)
{
    this->keyPressed((Qt::Key)key);
}

void QBird::Input::keyReleased(const Qt::Key& key)
{
    QBird::Logger::LogInfo("Release key " + QKeySequence(key).toString().toStdString());
}

void QBird::Input::keyReleased(const int& key)
{
    this->keyReleased((Qt::Key)key);
}
