#include "GameMainWindow.h"
#include <Qt3DInput/qkeyevent.h>
#include "QBirdEngine.h"

QBird::GameMainWindow::GameMainWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::GameMainWindowClass())
    , inputSystem(new QBird::Input())
    , logger(new QBird::Logger())
{
    ui->setupUi(this);
}

QBird::GameMainWindow::~GameMainWindow()
{
    delete ui;
    delete inputSystem;
    delete logger;
}

void QBird::GameMainWindow::keyPressEvent(QKeyEvent* event)
{
    this->inputSystem->keyPressed(event->key());
}

void QBird::GameMainWindow::keyReleaseEvent(QKeyEvent* event)
{
    this->inputSystem->keyReleased(event->key());
}
