#include "Input.h"
#include "QBirdEngine.h"
#include <qkeysequence.h>

void QBird::Input::keyPressed(const Qt::Key& key)
{
    QBird::Logger::Log("Press key " + QKeySequence(key).toString().toStdString() + '\n');
}

void QBird::Input::keyPressed(const int& key)
{
    this->keyPressed((Qt::Key)key);
}

void QBird::Input::keyReleased(const Qt::Key& key)
{
    QBird::Logger::Log("Release key " + QKeySequence(key).toString().toStdString() + '\n');
}

void QBird::Input::keyReleased(const int& key)
{
    this->keyReleased((Qt::Key)key);
}
