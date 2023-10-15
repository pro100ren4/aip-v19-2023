cmake_minimum_required(VERSION 3.27)

set(PROJECT 003)

project(${PROJECT})

set(${PROJECT}_INCLUDES
    inc/Curd.h
    inc/DairyProducts.h
    inc/Food.h
)

set(${PROJECT}_SOURCES
    src/Curd.cpp
    src/DairyProducts.cpp
    src/Food.cpp
    src/main.cpp
)

add_executable(${PROJECT}
    ${${PROJECT}_INCLUDES}
    ${${PROJECT}_SOURCES}
)