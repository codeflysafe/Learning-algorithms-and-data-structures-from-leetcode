# cmake_minimum_required(VERSION <specify CMake version here>)
cmake_minimum_required(VERSION 3.00)
project(lc)

set(CMAKE_CXX_STANDARD 14)

# include_directories(${PROJECT_SOURCE_DIR}/include/)

# add_library(${PROJECT_NAME} SHARED graph/binary_tree.cpp
#         src/double_array_tree.cpp
#         src/seg_tree.cpp
#         src/trie_template.cpp
#         src/union_find.cpp)

add_executable(lc graph/126_word-ladder-ii.cpp)
# target_link_libraries(c_project ${PROJECT_NAME})