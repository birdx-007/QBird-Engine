#pragma once

#include <QtWidgets/QWidget>
#include "ui_GameMainWindow.h"
#include "Input/Input.h"
#include "Logging/Logger.h"

QT_BEGIN_NAMESPACE
namespace Ui { class GameMainWindowClass; };
QT_END_NAMESPACE

namespace QBird {
    class GameMainWindow : public QWidget
    {
        Q_OBJECT

    public:
        GameMainWindow(QWidget* parent = nullptr);
        ~GameMainWindow();
    private: // widget events
        void keyPressEvent(QKeyEvent* event) override;
        void keyReleaseEvent(QKeyEvent* event) override;
    signals:
        void QuitSignal();
    private:
        Ui::GameMainWindowClass* ui;
        QBird::Input* inputSystem;
        QBird::Logger* logger;
    };
};

