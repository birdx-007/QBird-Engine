#include "GameMainWindow.h"
#include <Qt3DInput/qkeyevent.h>

QBird::GameMainWindow::GameMainWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::GameMainWindowClass())
    , inputSystem(new QBird::Input())
{
    ui->setupUi(this);
}

QBird::GameMainWindow::~GameMainWindow()
{
    delete ui;
    delete inputSystem;
}

void QBird::GameMainWindow::keyPressEvent(QKeyEvent* event)
{
    this->inputSystem->keyPressed((Qt::Key)event->key());
}

void QBird::GameMainWindow::keyReleaseEvent(QKeyEvent* event)
{
    this->inputSystem->keyReleased((Qt::Key)event->key());
}
