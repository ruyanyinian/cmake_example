cmake_minimum_required(VERSION 3.10)
project(helloworld "CXX")
set(CMAKE_CXX_STANDARD 11)

add_library(helloworld
    SHARED
    ${PROJECT_SOURCE_DIR}/hello_world.cpp)


target_include_directories(helloworld 
    PRIVATE
    hello
    world)