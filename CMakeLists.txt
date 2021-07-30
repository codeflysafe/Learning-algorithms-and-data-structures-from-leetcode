# cmake_minimum_required(VERSION <specify CMake version here>)
cmake_minimum_required(VERSION 3.00)
project(c_projects)

set(CMAKE_CXX_STANDARD 14)

include_directories(${PROJECT_SOURCE_DIR}/include/)

add_library(${PROJECT_NAME} SHARED src/binary_tree.cpp
        src/double_array_tree.cpp
        src/seg_tree.cpp
        src/trie_template.cpp)

add_executable(c_project main.cpp)

target_link_libraries(c_project ${PROJECT_NAME})