#include "Logger.h"

std::ofstream QBird::Logger::Logger::outStream = std::ofstream();

QBird::Logger::Logger()
{
    outStream.open("QBird.log");
}

QBird::Logger::~Logger()
{
    outStream.close();
}

void QBird::Logger::Log(std::string message)
{
    outStream << message;
}
