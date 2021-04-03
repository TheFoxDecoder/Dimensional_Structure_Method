cmake_minimum_required(VERSION 3.17)
project(Dimention_cal)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED)

set(SOURCE_FILES  main.cpp)
add_executable(Dimention_cal ${SOURCE_FILES})

add_executable(test Test/test.hpp)