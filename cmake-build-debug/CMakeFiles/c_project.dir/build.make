# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/sjhuang/Documents/docs/Learning-algorithms-and-data-structures-from-leetcode

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/sjhuang/Documents/docs/Learning-algorithms-and-data-structures-from-leetcode/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/c_project.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/c_project.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/c_project.dir/flags.make

CMakeFiles/c_project.dir/examples/binary_tree_test.cpp.o: CMakeFiles/c_project.dir/flags.make
CMakeFiles/c_project.dir/examples/binary_tree_test.cpp.o: ../examples/binary_tree_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sjhuang/Documents/docs/Learning-algorithms-and-data-structures-from-leetcode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/c_project.dir/examples/binary_tree_test.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/c_project.dir/examples/binary_tree_test.cpp.o -c /Users/sjhuang/Documents/docs/Learning-algorithms-and-data-structures-from-leetcode/examples/binary_tree_test.cpp

CMakeFiles/c_project.dir/examples/binary_tree_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/c_project.dir/examples/binary_tree_test.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sjhuang/Documents/docs/Learning-algorithms-and-data-structures-from-leetcode/examples/binary_tree_test.cpp > CMakeFiles/c_project.dir/examples/binary_tree_test.cpp.i

CMakeFiles/c_project.dir/examples/binary_tree_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/c_project.dir/examples/binary_tree_test.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sjhuang/Documents/docs/Learning-algorithms-and-data-structures-from-leetcode/examples/binary_tree_test.cpp -o CMakeFiles/c_project.dir/examples/binary_tree_test.cpp.s

CMakeFiles/c_project.dir/examples/double_array_tree_test.cpp.o: CMakeFiles/c_project.dir/flags.make
CMakeFiles/c_project.dir/examples/double_array_tree_test.cpp.o: ../examples/double_array_tree_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sjhuang/Documents/docs/Learning-algorithms-and-data-structures-from-leetcode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/c_project.dir/examples/double_array_tree_test.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/c_project.dir/examples/double_array_tree_test.cpp.o -c /Users/sjhuang/Documents/docs/Learning-algorithms-and-data-structures-from-leetcode/examples/double_array_tree_test.cpp

CMakeFiles/c_project.dir/examples/double_array_tree_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/c_project.dir/examples/double_array_tree_test.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sjhuang/Documents/docs/Learning-algorithms-and-data-structures-from-leetcode/examples/double_array_tree_test.cpp > CMakeFiles/c_project.dir/examples/double_array_tree_test.cpp.i

CMakeFiles/c_project.dir/examples/double_array_tree_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/c_project.dir/examples/double_array_tree_test.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sjhuang/Documents/docs/Learning-algorithms-and-data-structures-from-leetcode/examples/double_array_tree_test.cpp -o CMakeFiles/c_project.dir/examples/double_array_tree_test.cpp.s

CMakeFiles/c_project.dir/examples/seg_tree_test.cpp.o: CMakeFiles/c_project.dir/flags.make
CMakeFiles/c_project.dir/examples/seg_tree_test.cpp.o: ../examples/seg_tree_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sjhuang/Documents/docs/Learning-algorithms-and-data-structures-from-leetcode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/c_project.dir/examples/seg_tree_test.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/c_project.dir/examples/seg_tree_test.cpp.o -c /Users/sjhuang/Documents/docs/Learning-algorithms-and-data-structures-from-leetcode/examples/seg_tree_test.cpp

CMakeFiles/c_project.dir/examples/seg_tree_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/c_project.dir/examples/seg_tree_test.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sjhuang/Documents/docs/Learning-algorithms-and-data-structures-from-leetcode/examples/seg_tree_test.cpp > CMakeFiles/c_project.dir/examples/seg_tree_test.cpp.i

CMakeFiles/c_project.dir/examples/seg_tree_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/c_project.dir/examples/seg_tree_test.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sjhuang/Documents/docs/Learning-algorithms-and-data-structures-from-leetcode/examples/seg_tree_test.cpp -o CMakeFiles/c_project.dir/examples/seg_tree_test.cpp.s

CMakeFiles/c_project.dir/examples/trie_test.cpp.o: CMakeFiles/c_project.dir/flags.make
CMakeFiles/c_project.dir/examples/trie_test.cpp.o: ../examples/trie_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sjhuang/Documents/docs/Learning-algorithms-and-data-structures-from-leetcode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/c_project.dir/examples/trie_test.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/c_project.dir/examples/trie_test.cpp.o -c /Users/sjhuang/Documents/docs/Learning-algorithms-and-data-structures-from-leetcode/examples/trie_test.cpp

CMakeFiles/c_project.dir/examples/trie_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/c_project.dir/examples/trie_test.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sjhuang/Documents/docs/Learning-algorithms-and-data-structures-from-leetcode/examples/trie_test.cpp > CMakeFiles/c_project.dir/examples/trie_test.cpp.i

CMakeFiles/c_project.dir/examples/trie_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/c_project.dir/examples/trie_test.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sjhuang/Documents/docs/Learning-algorithms-and-data-structures-from-leetcode/examples/trie_test.cpp -o CMakeFiles/c_project.dir/examples/trie_test.cpp.s

CMakeFiles/c_project.dir/examples/prefix_and_suffix_search.cpp.o: CMakeFiles/c_project.dir/flags.make
CMakeFiles/c_project.dir/examples/prefix_and_suffix_search.cpp.o: ../examples/prefix_and_suffix_search.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sjhuang/Documents/docs/Learning-algorithms-and-data-structures-from-leetcode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/c_project.dir/examples/prefix_and_suffix_search.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/c_project.dir/examples/prefix_and_suffix_search.cpp.o -c /Users/sjhuang/Documents/docs/Learning-algorithms-and-data-structures-from-leetcode/examples/prefix_and_suffix_search.cpp

CMakeFiles/c_project.dir/examples/prefix_and_suffix_search.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/c_project.dir/examples/prefix_and_suffix_search.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sjhuang/Documents/docs/Learning-algorithms-and-data-structures-from-leetcode/examples/prefix_and_suffix_search.cpp > CMakeFiles/c_project.dir/examples/prefix_and_suffix_search.cpp.i

CMakeFiles/c_project.dir/examples/prefix_and_suffix_search.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/c_project.dir/examples/prefix_and_suffix_search.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sjhuang/Documents/docs/Learning-algorithms-and-data-structures-from-leetcode/examples/prefix_and_suffix_search.cpp -o CMakeFiles/c_project.dir/examples/prefix_and_suffix_search.cpp.s

CMakeFiles/c_project.dir/examples/word_dictionary.cpp.o: CMakeFiles/c_project.dir/flags.make
CMakeFiles/c_project.dir/examples/word_dictionary.cpp.o: ../examples/word_dictionary.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/sjhuang/Documents/docs/Learning-algorithms-and-data-structures-from-leetcode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/c_project.dir/examples/word_dictionary.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/c_project.dir/examples/word_dictionary.cpp.o -c /Users/sjhuang/Documents/docs/Learning-algorithms-and-data-structures-from-leetcode/examples/word_dictionary.cpp

CMakeFiles/c_project.dir/examples/word_dictionary.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/c_project.dir/examples/word_dictionary.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sjhuang/Documents/docs/Learning-algorithms-and-data-structures-from-leetcode/examples/word_dictionary.cpp > CMakeFiles/c_project.dir/examples/word_dictionary.cpp.i

CMakeFiles/c_project.dir/examples/word_dictionary.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/c_project.dir/examples/word_dictionary.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sjhuang/Documents/docs/Learning-algorithms-and-data-structures-from-leetcode/examples/word_dictionary.cpp -o CMakeFiles/c_project.dir/examples/word_dictionary.cpp.s

# Object files for target c_project
c_project_OBJECTS = \
"CMakeFiles/c_project.dir/examples/binary_tree_test.cpp.o" \
"CMakeFiles/c_project.dir/examples/double_array_tree_test.cpp.o" \
"CMakeFiles/c_project.dir/examples/seg_tree_test.cpp.o" \
"CMakeFiles/c_project.dir/examples/trie_test.cpp.o" \
"CMakeFiles/c_project.dir/examples/prefix_and_suffix_search.cpp.o" \
"CMakeFiles/c_project.dir/examples/word_dictionary.cpp.o"

# External object files for target c_project
c_project_EXTERNAL_OBJECTS =

c_project: CMakeFiles/c_project.dir/examples/binary_tree_test.cpp.o
c_project: CMakeFiles/c_project.dir/examples/double_array_tree_test.cpp.o
c_project: CMakeFiles/c_project.dir/examples/seg_tree_test.cpp.o
c_project: CMakeFiles/c_project.dir/examples/trie_test.cpp.o
c_project: CMakeFiles/c_project.dir/examples/prefix_and_suffix_search.cpp.o
c_project: CMakeFiles/c_project.dir/examples/word_dictionary.cpp.o
c_project: CMakeFiles/c_project.dir/build.make
c_project: libc_projects.dylib
c_project: CMakeFiles/c_project.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/sjhuang/Documents/docs/Learning-algorithms-and-data-structures-from-leetcode/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable c_project"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/c_project.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/c_project.dir/build: c_project

.PHONY : CMakeFiles/c_project.dir/build

CMakeFiles/c_project.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/c_project.dir/cmake_clean.cmake
.PHONY : CMakeFiles/c_project.dir/clean

CMakeFiles/c_project.dir/depend:
	cd /Users/sjhuang/Documents/docs/Learning-algorithms-and-data-structures-from-leetcode/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/sjhuang/Documents/docs/Learning-algorithms-and-data-structures-from-leetcode /Users/sjhuang/Documents/docs/Learning-algorithms-and-data-structures-from-leetcode /Users/sjhuang/Documents/docs/Learning-algorithms-and-data-structures-from-leetcode/cmake-build-debug /Users/sjhuang/Documents/docs/Learning-algorithms-and-data-structures-from-leetcode/cmake-build-debug /Users/sjhuang/Documents/docs/Learning-algorithms-and-data-structures-from-leetcode/cmake-build-debug/CMakeFiles/c_project.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/c_project.dir/depend

