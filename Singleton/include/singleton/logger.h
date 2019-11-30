#ifndef SINGLETON_LOGGER_H_
#define SINGLETON_LOGGER_H_
#include <string>

namespace singleton {

#define LOGGER_FILE_PATH  "/var/log/singleton.log"
using std::string;

class Logger {
    string filepath_ = LOGGER_FILE_PATH;
    Logger();

public:
    ~Logger();
    static Logger& GetLogger(void);
    Logger(const Logger&) = delete;
    Logger& operator=(Logger) = delete;

    void WriteLog(string desc) const;

};


}

#endif /* SINGLETON_LOGGER_H_ */
