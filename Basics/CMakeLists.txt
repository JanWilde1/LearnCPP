cmake_minimum_required(VERSION 3.10)
project(Basics)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES Basics.cpp
        Basics.h)

add_executable(Basics ${SOURCE_FILES})