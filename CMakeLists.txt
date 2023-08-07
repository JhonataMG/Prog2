

cmake_minimum_required(VERSION 3.26)

project(primeiro C)

set(CMAKE_C_STANDARD 17)

add_executable(primeiro main.c
        calculadora.c
        calculadora.h)

# fazendo ligação com a biblioteca math.h
target_link_libraries(primeiro m)