#include <singleton/logger.h>

using namespace singleton;

int main(void)
{
    Logger& logger = Logger::GetLogger();
    Logger& logger_2 = Logger::GetLogger();

    logger.WriteLog("Hello World");
    logger_2.WriteLog("Welcome to C++");

    return 0;
}
