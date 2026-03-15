cmake_minimum_required(VERSION 3.10)

project(MiProyecto C)

set(CMAKE_C_STANDARD 11)

include_directories(include lib)

add_subdirectory(lib)

add_executable(programa
    src/main.c
    src/app.c
)

target_link_libraries(programa suma)

add_executable(test_suma
    tests/test_suma.c
)

target_link_libraries(test_suma suma)