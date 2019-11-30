#include <string>
#include <iostream>

#include <singleton/logger.h>

namespace singleton {

using std::string;
using std::cout;
using std::endl;

Logger::Logger()
{
    cout << "Open " << filepath_ << " as log." << endl;
}

Logger::~Logger()
{
    cout << "Close " << filepath_ << "." << endl;
}

Logger& Logger::GetLogger(void)
{
    static Logger log_instance_;
    return log_instance_;
}

void Logger::WriteLog(string desc) const
{
    cout << "Write '" << desc << "' into " << filepath_ << "." << endl;
}


}
