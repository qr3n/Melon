#ifndef MELON_UEFI_PROJECT_H
#define MELON_UEFI_PROJECT_H


#include "Project.h"


const Project uefiProject {
        {
                "src",
                "obj",
                "bin",

                "src/bootloader",
                "src/kernel"
        },

        {
                {
                        "entry.c",
                        "src/bootloader/",
                        ""
                }
        }
};


#endif //MELON_UEFI_PROJECT_H
