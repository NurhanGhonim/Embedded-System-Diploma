cmake_minimum_required(VERSION 4.0)
project(untitled)

set(CMAKE_CXX_STANDARD 26)

add_executable(untitled main.cpp
        "C Codes.c"
        C_codes/Task_1.c
        C_codes/Task_2.c
        C_codes/Task_3.c
        Data_structure/Task_1.c)
