cmake_minimum_required(VERSION 3.3)
project(intro_cpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp basic_data_types/basic_data_types.cpp basic_data_types/basic_data_types.h dictionary_map/map.cpp dictionary_map/map.h conditionals/conditional.cpp conditionals/conditional.h)
add_executable(intro_cpp ${SOURCE_FILES})
