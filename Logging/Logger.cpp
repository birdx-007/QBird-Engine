#include "Logger.h"
#include "QBirdEngine.h"

std::ofstream QBird::Logger::Logger::outStream = std::ofstream();

QBird::Logger::Logger()
{
    outStream.open(QBird::QBIRD_LOG_DIR);
}

QBird::Logger::~Logger()
{
    outStream.close();
}

void QBird::Logger::Log(const std::string& message)
{
    outStream << message;
}
