cmake_minimum_required(VERSION 3.8)
project(global_cplus)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES global.cplus.cpp)
add_executable(global_cplus ${SOURCE_FILES})