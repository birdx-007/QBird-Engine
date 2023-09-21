#include "GameMainWindow.h"
#include "QBirdEngine.h"
#include <Qt3DInput/qkeyevent.h>

QBird::GameMainWindow::GameMainWindow(const Observer* gameStartObserver, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::GameMainWindowClass())
{
    ui->setupUi(this);
    gameStartSubject.addObserver(gameStartObserver);
    gameStartSubject.notify();
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
