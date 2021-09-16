cmake_minimum_required(VERSION 3.10)
project(hello "CXX")
set(CMAKE_CXX_STANDARD 11)

add_library(hello 
    SHARED
    ${PROJECT_SOURCE_DIR}/hello.cpp)