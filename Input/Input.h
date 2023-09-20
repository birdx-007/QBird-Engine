#pragma once
#include <qnamespace.h>

namespace QBird {
    class Input
    {
        friend class GameMainWindow;
    private:
        void keyPressed(const Qt::Key& key);
        void keyPressed(const int& key);
        void keyReleased(const Qt::Key& key);
        void keyReleased(const int& key);
    };
};
