#pragma once

#include <QtWidgets/QWidget>
#include "ui_GameMainWindow.h"
#include "QBirdDefines.h"

QT_BEGIN_NAMESPACE
namespace Ui { class GameMainWindowClass; };
QT_END_NAMESPACE

namespace QBird {
    class GameMainWindow : public QWidget
    {
        Q_OBJECT

    public:
        friend class QBIRD_GAME_CLASS_NAME;
        explicit GameMainWindow(QWidget* parent = nullptr);
        ~GameMainWindow();
    private: // widget events
        void keyPressEvent(QKeyEvent* event) override;
        void keyReleaseEvent(QKeyEvent* event) override;
    signals:
        void QuitSignal();
    private:
        Ui::GameMainWindowClass* ui;
    };
};

