# cmake_minimum_required(VERSION <specify CMake version here>)
cmake_minimum_required(VERSION 3.00)
project(c_projects)

set(CMAKE_CXX_STANDARD 14)

include_directories(${PROJECT_SOURCE_DIR}/include/)

add_library(${PROJECT_NAME} SHARED src/binary_tree.cpp
        src/double_array_tree.cpp
        src/seg_tree.cpp
        src/trie_template.cpp)

add_executable(c_project examples/binary_tree_test.cpp
        examples/double_array_tree_test.cpp
        examples/seg_tree_test.cpp
        examples/trie_test.cpp
        examples/prefix_and_suffix_search.cpp
        examples/word_dictionary.cpp)

target_link_libraries(c_project ${PROJECT_NAME})