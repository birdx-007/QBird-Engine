#pragma once
#include "Utilities/noncopyable.h"
#include "Utilities/nonassignable.h"
#include <qnamespace.h>

namespace QBird {
    class Input
    {
    public:
        friend class GameMainWindow;
        NONCOPYABLE(Input)
        NONASSIGNABLE(Input)
        static Input& instance();
    private:
        Input();
        ~Input();
        void keyPressed(const Qt::Key& key);
        void keyPressed(const int& key);
        void keyReleased(const Qt::Key& key);
        void keyReleased(const int& key);
    };
};
