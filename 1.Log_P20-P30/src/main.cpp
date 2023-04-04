#include <iostream>
#include "Log.h"

int main(int argc, char **argv)
{

    Log log;
    log.setLogLevel(log.LevelInfo);
    log.error("oh!");
    log.warn("hi!");
    log.info("no!");

    log.setLogLevel(log.LevelError);
    log.error("oh!");
    log.warn("hi!");
    log.info("no!");

    return 0;
}