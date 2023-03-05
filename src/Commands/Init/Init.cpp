#include "Init.h"
#include <iostream>
#include <direct.h>

// Projects
#include "projects/biosProject.h"
#include "projects/uefiProject.h"


void Init::create(const Project *project) {
    for (const auto &folder: project->folders) {
        mkdir(folder);
    }

    for (const auto &file: project->files) {
        fstream.open(file.path + file.name);
        fstream << file.text;
        fstream.close();
    }
}

void Init::run() {
    std::cout << "Running init...";
    create(&uefiProject);
}


std::string Init::getDescription() {
    return "Init description";
}