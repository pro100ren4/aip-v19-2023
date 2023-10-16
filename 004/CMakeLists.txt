cmake_minimum_required(VERSION 3.27)

set(PROJECT 004)

project(${PROJECT})

set(${PROJECT}_INCLUDES
    inc/Bull.h
    inc/Human.h
    inc/Satyr.h
)

set(${PROJECT}_INCLUDES
    src/Bull.cpp
    src/Human.cpp
    src/Satyr.cpp
    src/main.cpp
)

add_executable(${PROJECT}
    ${${PROJECT}_INCLUDES}
    ${${PROJECT}_INCLUDES}
)