cmake_minimum_required(VERSION 3.27)

set(PROJECT 002)

project(${PROJECT})

add_executable(${PROJECT}
    src/main.cpp
    src/Food.cpp
    src/DairyProducts.cpp
    src/Curd.cpp
    inc/Food.h
    inc/DairyProducts.h
    inc/Curd.h
)