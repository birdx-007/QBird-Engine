#pragma once
// $(ProjectDir) need to be added to the Additional Include Directories
// then you can this use through:
// #include "QBirdEngine.h"
#include "Logging/Logger.h"
#include "Input/Input.h"
namespace QBird {
    constexpr const char* QBIRD_LOG_DIR = "QBird.log";
    constexpr int QBIRD_KEY_PRESSED_DICT_INITIAL_SIZE = 150;
    constexpr int QBIRD_MICROSECOND_PER_UPDATE = 15000;
};