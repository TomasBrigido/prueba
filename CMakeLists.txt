cmake_minimum_required(VERSION 3.10)

project(MiProyecto C)

include_directories(include)

add_executable(programa
    src/main.c
    src/suma.c
)