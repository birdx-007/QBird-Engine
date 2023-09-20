#include "Logger.h"
#include "QBirdEngine.h"

std::ofstream QBird::Logger::Logger::outStream = std::ofstream();

QBird::Logger& QBird::Logger::instance()
{
    static Logger logger;
    return logger;
}

QBird::Logger::Logger()
{
    if (!outStream.is_open()) {
        outStream.open(QBird::QBIRD_LOG_DIR);
        Log("Hello from QBird Logger.\n");
    }
}

QBird::Logger::~Logger()
{
    if (outStream.is_open()) {
        Log("Goodbye from QBird Logger.\n");
        outStream.close();
    }
}

void QBird::Logger::Log(const std::string& message)
{
    outStream << message;
}
