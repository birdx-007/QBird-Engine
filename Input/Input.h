#pragma once
#include "QBirdDefines.h"
#include <qnamespace.h>
#include <unordered_map>

namespace QBird {
    class Input
    {
        QBIRD_GAME_SINGLETON(Input)
    public:
        friend class GameMainWindow;
        static bool getKey(const Qt::Key& key);
    private:
        static void keyPressed(const Qt::Key& key);
        static void keyPressed(const int& key);
        static void keyReleased(const Qt::Key& key);
        static void keyReleased(const int& key);
        static std::unordered_map<Qt::Key, bool> keyPressedDict;
    };
};
