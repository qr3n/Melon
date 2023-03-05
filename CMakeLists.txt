cmake_minimum_required(VERSION 3.24)
project(melon)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-Ofast -Wall -finline-functions -m64 -static")

add_executable(melon src/main.cpp src/Commands/Init/Init.cpp src/Commands/Init/Init.h src/Commands/ICommand.h src/Managers/ArgumentsManager/ArgumentsManager.cpp src/Managers/ArgumentsManager/ArgumentsManager.h src/Managers/OutputManager/OutputManager.cpp src/Managers/OutputManager/OutputManager.h)
