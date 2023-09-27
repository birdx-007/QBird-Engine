#pragma once
// $(ProjectDir) need to be added to the Additional Include Directories
// then you can this use through:
// #include "QBirdEngine.h"
#include "Logging/Logger.h"
#include "Input/Input.h"
namespace QBird {
    // 日志存储位置
    constexpr const char* QBIRD_LOG_DIR = "QBird.log";
    constexpr int QBIRD_KEY_PRESSED_DICT_INITIAL_SIZE = 150;
    // 引擎Update间隔（微秒计）
    constexpr int QBIRD_MICROSECOND_PER_UPDATE = 15000;
};