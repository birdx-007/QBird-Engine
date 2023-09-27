#pragma once
#include "QBirdDefines.h"
#include <string>
#include <fstream>
namespace QBird {
    enum class LogLevel : unsigned
    {
        None = 0,
        Info = 1,
        Warning = 2,
        Error = 3
    };
    class Logger
    {
        QBIRD_GAME_SINGLETON(Logger)

    public:
        static void LogInfo(const std::string& message);
        static void LogWarning(const std::string& message);
        static void LogError(const std::string& message);
    private:
        static void Log(LogLevel level,const std::string& message);
        static std::ofstream outStream;
    };
};

