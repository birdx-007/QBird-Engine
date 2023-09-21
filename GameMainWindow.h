#pragma once

#include <QtWidgets/QWidget>
#include "ui_GameMainWindow.h"
#include "Utilities/ObserverPattern/Subject.h"

QT_BEGIN_NAMESPACE
namespace Ui { class GameMainWindowClass; };
QT_END_NAMESPACE

namespace QBird {
    class GameMainWindow : public QWidget
    {
        Q_OBJECT

    public:
        explicit GameMainWindow(const Observer* gameStartObserver, QWidget* parent = nullptr);
        ~GameMainWindow();
    private: // widget events
        void keyPressEvent(QKeyEvent* event) override;
        void keyReleaseEvent(QKeyEvent* event) override;
    signals:
        void QuitSignal();
    private:
        Ui::GameMainWindowClass* ui;
        Subject gameStartSubject;
    };
};

