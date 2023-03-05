#ifndef MELON_ICOMMAND_H
#define MELON_ICOMMAND_H


#include <string>


class ICommand {
public:
    virtual void run() = 0;
    virtual std::string getDescription() = 0;
};


#endif //MELON_ICOMMAND_H
