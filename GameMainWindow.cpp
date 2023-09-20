#include "GameMainWindow.h"
#include <Qt3DInput/qkeyevent.h>
#include "QBirdEngine.h"

QBird::GameMainWindow::GameMainWindow(QBird::Input* input,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::GameMainWindowClass())
    , inputSystem(input)
{
    ui->setupUi(this);
    assert(input != nullptr);
}

QBird::GameMainWindow::~GameMainWindow()
{
    delete ui;
}

void QBird::GameMainWindow::keyPressEvent(QKeyEvent* event)
{
    this->inputSystem->keyPressed(event->key());
}

void QBird::GameMainWindow::keyReleaseEvent(QKeyEvent* event)
{
    this->inputSystem->keyReleased(event->key());
}
