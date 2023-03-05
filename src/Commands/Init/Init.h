#ifndef MELON_INIT_H
#define MELON_INIT_H


#include "../ICommand.h"
#include "projects/Project.h"
#include <fstream>


class Init: public ICommand {
private:
    std::ofstream fstream{};

    void create(const Project *project);
public:
    void run() override;
    std::string getDescription() override;
};


#endif //MELON_INIT_H
