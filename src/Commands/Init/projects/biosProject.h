#ifndef MELON_BIOS_PROJECT_H
#define MELON_BIOS_PROJECT_H


#include "Project.h"


const Project biosProject {
        {
                "src",
                "obj",
                "bin",

                "src/bootloader",
                "src/kernel"
        },

        {
                {
                        "entry.asm",
                        "src/bootloader/",
                        ""
                }
        }
};


#endif //MELON_BIOS_PROJECT_H