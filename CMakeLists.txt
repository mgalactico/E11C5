cmake_minimum_required(VERSION 3.6)
project(E11C5)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}  -Wall -Wextra -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(E11C5 ${SOURCE_FILES})