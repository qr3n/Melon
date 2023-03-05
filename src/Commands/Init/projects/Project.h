#ifndef MELON_PROJECT_H
#define MELON_PROJECT_H


#include <string>
#include <vector>


struct File {
    std::string name;
    std::string path;
    std::string text;
};

struct Project {
    std::vector<const char*> folders;
    std::vector<File> files;
};


#endif //MELON_PROJECT_H
