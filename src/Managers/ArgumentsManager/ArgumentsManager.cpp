#include <algorithm>
#include "ArgumentsManager.h"


ArgumentsManager::ArgumentsManager(int &argc, char *argv[]) {
    for (int i = 1; i < argc; ++i) {
        std::string argument(argv[i]);

        if (argument[0] == '-' && argument[1] == '-')
            flags.push_back(argument);

        else commands.push_back(argument);
    }
}

bool ArgumentsManager::argumentsIncorrect() {
    size_t size = commands.size();

    if (size > 1 || size == 0)
        return true;

    return false;
}

std::string ArgumentsManager::getCommand() {
    return commands[0];
}

bool ArgumentsManager::flagExists(const std::string &flag) {
    return std::find(flags.begin(), flags.end(), flag) != flags.end();
}