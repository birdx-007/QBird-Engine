#include "Input.h"
#include "QBirdEngine.h"
#include <qkeysequence.h>

std::unordered_map<Qt::Key, bool> QBird::Input::keyPressedDict = {};

bool QBird::Input::getKey(const Qt::Key& key)
{
    return keyPressedDict[key];
}

QBird::Input::Input()
{
    keyPressedDict.reserve(QBird::QBIRD_KEY_PRESSED_DICT_INITIAL_SIZE);
}

QBird::Input::~Input()
{
}

void QBird::Input::keyPressed(const Qt::Key& key)
{
    keyPressedDict[key] = true;
    QBird::Logger::LogInfo("Press key " + QKeySequence(key).toString().toStdString());
}

void QBird::Input::keyPressed(const int& key)
{
    keyPressed((Qt::Key)key);
}

void QBird::Input::keyReleased(const Qt::Key& key)
{
    keyPressedDict[key] = false;
    QBird::Logger::LogInfo("Release key " + QKeySequence(key).toString().toStdString());
}

void QBird::Input::keyReleased(const int& key)
{
    keyReleased((Qt::Key)key);
}
