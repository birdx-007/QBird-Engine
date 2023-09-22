#include "GameMainWindow.h"
#include "QBirdEngine.h"
#include <Qt3DInput/qkeyevent.h>

QBird::GameMainWindow::GameMainWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::GameMainWindowClass())
{
    ui->setupUi(this);
}

QBird::GameMainWindow::~GameMainWindow()
{
    delete ui;
}

void QBird::GameMainWindow::keyPressEvent(QKeyEvent* event)
{
    QBird::Input::keyPressed(event->key());
}

void QBird::GameMainWindow::keyReleaseEvent(QKeyEvent* event)
{
    QBird::Input::keyReleased(event->key());
}
