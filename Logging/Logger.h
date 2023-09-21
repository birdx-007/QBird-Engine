#pragma once
#include "Utilities/noncopyable.h"
#include "Utilities/nonassignable.h"
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
    public:
        NONCOPYABLE(Logger)
        NONASSIGNABLE(Logger)
        static Logger& instance();
        static void LogInfo(const std::string& message);
        static void LogWarning(const std::string& message);
        static void LogError(const std::string& message);
    private:
        Logger();
        ~Logger();
        static void Log(LogLevel level,const std::string& message);
        static std::ofstream outStream;
    };
};

