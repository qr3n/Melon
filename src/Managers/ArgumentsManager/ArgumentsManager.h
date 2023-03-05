#ifndef MELON_ARGUMENTS_MANAGER_H
#define MELON_ARGUMENTS_MANAGER_H


#include <string>
#include <vector>


class ArgumentsManager {
private:
    std::vector<std::string> commands;
    std::vector<std::string> flags;

public:
    ArgumentsManager(int &argc, char* argv[]);
    bool argumentsIncorrect();

    std::string getCommand();
    bool flagExists(const std::string &flag);
};


#endif //MELON_ARGUMENTS_MANAGER_H
