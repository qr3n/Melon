#ifndef MELON_OUTPUT_MANAGER_H
#define MELON_OUTPUT_MANAGER_H


#include <string>


class OutputManager {
public:
    void log(const std::string &msg);
    void info(const std::string &msg);
    void success(const std::string &msg);
    void warning(const std::string &msg);
    void error(const std::string &msg);
};


#endif //MELON_OUTPUT_MANAGER_H
