cmake_minimum_required(VERSION 3.10)
project(cop3014_lab11_structs)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})
add_executable(array_struct.exe array_struct.cpp)
add_executable(init_struct.exe init_struct.cpp)
add_executable(nestedRect_struct.exe nestedRect_struct.cpp)
add_executable(rect_struct.exe rect_struct.cpp)

