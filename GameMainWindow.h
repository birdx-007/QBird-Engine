#pragma once

#include <QtWidgets/QWidget>
#include "ui_GameMainWindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class GameMainWindowClass; };
QT_END_NAMESPACE

class GameMainWindow : public QWidget
{
    Q_OBJECT

public:
    GameMainWindow(QWidget *parent = nullptr);
    ~GameMainWindow();

private:
    Ui::GameMainWindowClass *ui;
};
