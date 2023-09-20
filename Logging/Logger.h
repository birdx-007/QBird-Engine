#pragma once
#include <string>
#include <fstream>
namespace QBird {
    class Logger
    {
    public:
        Logger();
        ~Logger();
        static void Log(const std::string& message);
    private:
        static std::ofstream outStream;
    };
};

