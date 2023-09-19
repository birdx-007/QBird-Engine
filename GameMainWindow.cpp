#include "GameMainWindow.h"

GameMainWindow::GameMainWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::GameMainWindowClass())
{
    ui->setupUi(this);
}

GameMainWindow::~GameMainWindow()
{
    delete ui;
}
