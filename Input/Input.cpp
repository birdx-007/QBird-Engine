#include "Input.h"
#include "QBirdEngine.h"
#include <qkeysequence.h>

std::unordered_map<Qt::Key, QBird::KeyState> QBird::Input::keyPressedDict = {};

bool QBird::Input::getKey(const Qt::Key& key)
{
    return keyPressedDict[key].isPressed;
}

bool QBird::Input::getKeyDown(const Qt::Key& key)
{
    return keyPressedDict[key].isPressed && !keyPressedDict[key].isPressedInPreFrame;
}

bool QBird::Input::getKeyUp(const Qt::Key& key)
{
    return !keyPressedDict[key].isPressed && keyPressedDict[key].isPressedInPreFrame;
}

void QBird::Input::Update()
{
    for (auto& pair : keyPressedDict) {
        pair.second.isPressedInPreFrame = pair.second.isPressed;
    }
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
    keyPressedDict[key].isPressed = true;
    //QBird::Logger::LogInfo("Press key " + QKeySequence(key).toString().toStdString());
}

void QBird::Input::keyPressed(const int& key)
{
    keyPressed((Qt::Key)key);
}

void QBird::Input::keyReleased(const Qt::Key& key)
{
    keyPressedDict[key].isPressed = false;
    //QBird::Logger::LogInfo("Release key " + QKeySequence(key).toString().toStdString());
}

void QBird::Input::keyReleased(const int& key)
{
    keyReleased((Qt::Key)key);
}
