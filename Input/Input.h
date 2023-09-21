#pragma once
#include "Utilities/noncopyable.h"
#include "Utilities/nonassignable.h"
#include <qnamespace.h>
#include <unordered_map>

namespace QBird {
    class Input
    {
    public:
        friend class GameMainWindow;
        NONCOPYABLE(Input)
        NONASSIGNABLE(Input)
        static const Input& instance();
        static bool getKey(const Qt::Key& key);
    private:
        Input();
        ~Input();
        static void keyPressed(const Qt::Key& key);
        static void keyPressed(const int& key);
        static void keyReleased(const Qt::Key& key);
        static void keyReleased(const int& key);
        static std::unordered_map<Qt::Key, bool> keyPressedDict;
    };
};
