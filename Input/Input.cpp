#include "Input.h"
#include "QBirdEngine.h"
#include <qkeysequence.h>

void QBird::Input::keyPressed(Qt::Key key)
{
    QBird::Logger::Log("Press key " + QKeySequence(key).toString().toStdString() + '\n');
}

void QBird::Input::keyReleased(Qt::Key key)
{
    QBird::Logger::Log("Release key " + QKeySequence(key).toString().toStdString() + '\n');
}
