cmake_minimum_required(VERSION 3.27)

set(PROJECT 001)
project(${PROJECT})

add_executable(${PROJECT}Struct
    src/main1.cpp
    src/ClerkSt.cpp
    inc/ClerkSt.h
)

add_executable(${PROJECT}Class
    src/main.cpp
    src/Clerk.cpp
    inc/Clerk.h
)