cmake_minimum_required(VERSION 3.3)
project(demo8)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(demo8 ${SOURCE_FILES})