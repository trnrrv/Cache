cmake_minimum_required(VERSION 3.0.0)

project(Cache 
        LANGUAGES CXX
        VERSION 0.1
        DESCRIPTION "C-like LRU cache")

set(CMAKE_C_COMPILER "/usr/bin/gcc")
set(CMAKE_CXX_COMPILER "/usr/bin/g++")
set(CMAKE_BUILD_TYPE TESTS)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++23")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -O0")

add_subdirectory(src)
add_subdirectory(tests)