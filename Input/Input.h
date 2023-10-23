#pragma once
#include "QBirdDefines.h"
#include <qnamespace.h>
#include <unordered_map>

namespace QBird {
    struct KeyState {
        bool isPressed = false;
        bool isPressedInPreFrame = false;
    };
    class Input
    {
        QBIRD_GAME_SINGLETON(Input)
    public:
        friend class GameMainWindow;
        friend class GameMainEngine;
        static bool getKey(const Qt::Key& key);
        static bool getKeyDown(const Qt::Key& key);
        static bool getKeyUp(const Qt::Key& key);
        static void Update();
    private:
        static void keyPressed(const Qt::Key& key);
        static void keyPressed(const int& key);
        static void keyReleased(const Qt::Key& key);
        static void keyReleased(const int& key);
        static std::unordered_map<Qt::Key, KeyState> keyPressedDict;
    };
};
