#pragma once

#include <iostream>

class Log
{
public:
    enum Level
    {
        LevelError = 0,
        LevelWarning,
        LevelInfo
    };

private:
    Level m_LogLevel = LevelInfo;

public:
    void setLogLevel(Level level);
    void error(const char *message);
    void warn(const char *message);
    void info(const char *message);
};