cmake_minimum_required(VERSION 3.0.0)

project(Cache 
        LANGUAGES CXX
        VERSION 0.1
        DESCRIPTION "C-like LRU cache")

set(CMAKE_C_COMPILER "/usr/bin/gcc")
set(CMAKE_CXX_COMPILER "/usr/bin/g++")
set(CMAKE_BUILD_TYPE BUILD_TESTING)


set(BUILD_TESTING)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -O0")


set(APP_NAME Caches)
set(COMPILE_TESTS ON)

add_subdirectory(src)
if(COMPILE_TESTS)
    message("TEST VERSION")
    add_subdirectory(tests)
else()
    message("DEBUG VERSION")
endif(COMPILE_TESTS)