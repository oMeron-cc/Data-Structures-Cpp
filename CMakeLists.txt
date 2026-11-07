cmake_minimum_required(VERSION 3.15)
project(ds_notes)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


# ====== binary_tree ======
add_executable(run_bst 
    binary_tree/main.cpp 
    binary_tree/src/binary_search_tree.cpp
    binary_tree/src/binary_tree.cpp
)

target_include_directories(run_bst PRIVATE binary_tree/include)


# ====== linked_list ======
add_executable(run_list 
    linked_list/main.cpp 
    linked_list/src/linked_list.cpp
)

target_include_directories(run_list PRIVATE linked_list/include)