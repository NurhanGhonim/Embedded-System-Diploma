cmake_minimum_required(VERSION 3.20)
project(Embedded_System_Diploma C)

file(GLOB TASKS C_codes/*.c)

foreach(TASK ${TASKS})
    get_filename_component(NAME ${TASK} NAME_WE)
    add_executable(${NAME} ${TASK}
            Interface_Codes/DIO_Drivers/DIO.c
            Interface_Codes/DIO_Drivers/DIO.h
            Interface_Codes/DIO_Drivers/DIO.c)
endforeach()