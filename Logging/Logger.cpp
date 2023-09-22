#include "Logger.h"
#include "QBirdEngine.h"

std::ofstream QBird::Logger::Logger::outStream = std::ofstream(QBird::QBIRD_LOG_DIR);

QBird::Logger::Logger()
{
    if (outStream.is_open()) {
        LogInfo("Hello from QBird Logger.");
    }
}

QBird::Logger::~Logger()
{
    if (outStream.is_open()) {
        LogInfo("Goodbye from QBird Logger.");
        outStream.close();
    }
}

void QBird::Logger::Log(LogLevel level, const std::string& message)
{
    assert(outStream.is_open());
    switch (level)
    {
    case QBird::LogLevel::None:
        break;
    case QBird::LogLevel::Info:
        outStream << "[Info] ";
        break;
    case QBird::LogLevel::Warning:
        outStream << "[Warning] ";
        break;
    case QBird::LogLevel::Error:
        outStream << "[Error] ";
        break;
    default:
        outStream << "[Logger Exception] ";
        throw std::exception("Invalid LogLevel exception.");
        break;
    }
    outStream << message;
    if (*(message.cend() - 1) != '\n') {
        outStream << '\n';
    }
}

void QBird::Logger::LogInfo(const std::string& message)
{
    Log(QBird::LogLevel::Info, message);
}

void QBird::Logger::LogWarning(const std::string& message)
{
    Log(QBird::LogLevel::Warning, message);
}

void QBird::Logger::LogError(const std::string& message)
{
    Log(QBird::LogLevel::Error, message);
}
