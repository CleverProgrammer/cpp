cmake_minimum_required(VERSION 3.3)
project(intro_cpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp hello.cpp)
add_executable(intro_cpp ${SOURCE_FILES})
