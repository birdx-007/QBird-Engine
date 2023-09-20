#pragma once
#include "Utilities/noncopyable.h"
#include "Utilities/nonassignable.h"
#include <string>
#include <fstream>
namespace QBird {
    class Logger
    {
    public:
        NONCOPYABLE(Logger)
        NONASSIGNABLE(Logger)
        static Logger& instance();
        static void Log(const std::string& message);
    private:
        Logger();
        ~Logger();
        static std::ofstream outStream;
    };
};

