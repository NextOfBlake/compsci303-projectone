# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/49/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/49/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/robotics/UMKC/dataStructures/Project2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/robotics/UMKC/dataStructures/Project2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Project2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Project2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Project2.dir/flags.make

CMakeFiles/Project2.dir/main.cpp.o: CMakeFiles/Project2.dir/flags.make
CMakeFiles/Project2.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/robotics/UMKC/dataStructures/Project2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Project2.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project2.dir/main.cpp.o -c /home/robotics/UMKC/dataStructures/Project2/main.cpp

CMakeFiles/Project2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project2.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/robotics/UMKC/dataStructures/Project2/main.cpp > CMakeFiles/Project2.dir/main.cpp.i

CMakeFiles/Project2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project2.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/robotics/UMKC/dataStructures/Project2/main.cpp -o CMakeFiles/Project2.dir/main.cpp.s

CMakeFiles/Project2.dir/Morse.cpp.o: CMakeFiles/Project2.dir/flags.make
CMakeFiles/Project2.dir/Morse.cpp.o: ../Morse.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/robotics/UMKC/dataStructures/Project2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Project2.dir/Morse.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project2.dir/Morse.cpp.o -c /home/robotics/UMKC/dataStructures/Project2/Morse.cpp

CMakeFiles/Project2.dir/Morse.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project2.dir/Morse.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/robotics/UMKC/dataStructures/Project2/Morse.cpp > CMakeFiles/Project2.dir/Morse.cpp.i

CMakeFiles/Project2.dir/Morse.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project2.dir/Morse.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/robotics/UMKC/dataStructures/Project2/Morse.cpp -o CMakeFiles/Project2.dir/Morse.cpp.s

CMakeFiles/Project2.dir/BinaryTree.cpp.o: CMakeFiles/Project2.dir/flags.make
CMakeFiles/Project2.dir/BinaryTree.cpp.o: ../BinaryTree.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/robotics/UMKC/dataStructures/Project2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Project2.dir/BinaryTree.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project2.dir/BinaryTree.cpp.o -c /home/robotics/UMKC/dataStructures/Project2/BinaryTree.cpp

CMakeFiles/Project2.dir/BinaryTree.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project2.dir/BinaryTree.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/robotics/UMKC/dataStructures/Project2/BinaryTree.cpp > CMakeFiles/Project2.dir/BinaryTree.cpp.i

CMakeFiles/Project2.dir/BinaryTree.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project2.dir/BinaryTree.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/robotics/UMKC/dataStructures/Project2/BinaryTree.cpp -o CMakeFiles/Project2.dir/BinaryTree.cpp.s

# Object files for target Project2
Project2_OBJECTS = \
"CMakeFiles/Project2.dir/main.cpp.o" \
"CMakeFiles/Project2.dir/Morse.cpp.o" \
"CMakeFiles/Project2.dir/BinaryTree.cpp.o"

# External object files for target Project2
Project2_EXTERNAL_OBJECTS =

Project2: CMakeFiles/Project2.dir/main.cpp.o
Project2: CMakeFiles/Project2.dir/Morse.cpp.o
Project2: CMakeFiles/Project2.dir/BinaryTree.cpp.o
Project2: CMakeFiles/Project2.dir/build.make
Project2: CMakeFiles/Project2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/robotics/UMKC/dataStructures/Project2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable Project2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Project2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Project2.dir/build: Project2

.PHONY : CMakeFiles/Project2.dir/build

CMakeFiles/Project2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Project2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Project2.dir/clean

CMakeFiles/Project2.dir/depend:
	cd /home/robotics/UMKC/dataStructures/Project2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/robotics/UMKC/dataStructures/Project2 /home/robotics/UMKC/dataStructures/Project2 /home/robotics/UMKC/dataStructures/Project2/cmake-build-debug /home/robotics/UMKC/dataStructures/Project2/cmake-build-debug /home/robotics/UMKC/dataStructures/Project2/cmake-build-debug/CMakeFiles/Project2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Project2.dir/depend

