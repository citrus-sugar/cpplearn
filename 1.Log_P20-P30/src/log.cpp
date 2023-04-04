#include "Log.h"

void Log::setLogLevel(Level Level)
{
    m_LogLevel = Level;
}

void Log::error(const char *message)
{
    if (m_LogLevel >= LevelError)
        std::cout << "[error]: " << message << std::endl;
}

void Log::warn(const char *message)
{
    if (m_LogLevel >= LevelWarning)
        std::cout << "[warning]:" << message << std::endl;
}

void Log::info(const char *message)
{
    if (m_LogLevel >= LevelInfo)
        std::cout << "[info]:" << message << std::endl;
}