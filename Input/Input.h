#pragma once
#include <qnamespace.h>

namespace QBird {
    class Input
    {
        friend class GameMainWindow;
    private:
        void keyPressed(Qt::Key key);
        void keyReleased(Qt::Key key);
    };
};
