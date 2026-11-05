cmake_minimum_required(VERSION 3.15)
project(ds_notes)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(bst 
    binary_tree/main.cpp 
    binary_tree/src/binary_search_tree.cpp
)

target_include_directories(bst PRIVATE binary_tree/include)