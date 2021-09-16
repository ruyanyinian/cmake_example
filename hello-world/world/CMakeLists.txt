cmake_minimum_required(VERSION 3.10)
project(world "CXX")
set(CMAKE_CXX_STANDARD 11)

add_library(world
    SHARED
    ${PROJECT_SOURCE_DIR}/world.cpp)