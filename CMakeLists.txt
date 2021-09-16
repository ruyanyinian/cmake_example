cmake_minimum_required(VERSION 3.10)
project(printHelloWorld "CXX")
set(CMAKE_CXX_STANDARD 11)

add_library(main
    SHARED
    ${PROJECT_SOURCE_DIR}/main.cpp
    ${PROJECT_SOURCE_DIR}/hello-world/hello_world.cpp
    ${PROJECT_SOURCE_DIR}/hello-world/hello/hello.cpp
    ${PROJECT_SOURCE_DIR}/hello-world/world/world.cpp)

add_executable(printHelloWorld ${PROJECT_SOURCE_DIR}/main.cpp)
target_link_directories(printHelloWorld PRIVATE ${PROJECT_SOURCE_DIR}/hello-world)
target_link_libraries(printHelloWorld PRIVATE main)
