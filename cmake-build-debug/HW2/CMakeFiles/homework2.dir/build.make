# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_SOURCE_DIR = /Users/maximvasilev/CLionProjects/PR

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/maximvasilev/CLionProjects/PR/cmake-build-debug

# Include any dependencies generated for this target.
include HW2/CMakeFiles/homework2.dir/depend.make
# Include the progress variables for this target.
include HW2/CMakeFiles/homework2.dir/progress.make

# Include the compile flags for this target's objects.
include HW2/CMakeFiles/homework2.dir/flags.make

HW2/CMakeFiles/homework2.dir/main2.cpp.o: HW2/CMakeFiles/homework2.dir/flags.make
HW2/CMakeFiles/homework2.dir/main2.cpp.o: ../HW2/main2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/maximvasilev/CLionProjects/PR/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object HW2/CMakeFiles/homework2.dir/main2.cpp.o"
	cd /Users/maximvasilev/CLionProjects/PR/cmake-build-debug/HW2 && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/homework2.dir/main2.cpp.o -c /Users/maximvasilev/CLionProjects/PR/HW2/main2.cpp

HW2/CMakeFiles/homework2.dir/main2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/homework2.dir/main2.cpp.i"
	cd /Users/maximvasilev/CLionProjects/PR/cmake-build-debug/HW2 && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/maximvasilev/CLionProjects/PR/HW2/main2.cpp > CMakeFiles/homework2.dir/main2.cpp.i

HW2/CMakeFiles/homework2.dir/main2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/homework2.dir/main2.cpp.s"
	cd /Users/maximvasilev/CLionProjects/PR/cmake-build-debug/HW2 && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/maximvasilev/CLionProjects/PR/HW2/main2.cpp -o CMakeFiles/homework2.dir/main2.cpp.s

HW2/CMakeFiles/homework2.dir/functions.cpp.o: HW2/CMakeFiles/homework2.dir/flags.make
HW2/CMakeFiles/homework2.dir/functions.cpp.o: ../HW2/functions.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/maximvasilev/CLionProjects/PR/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object HW2/CMakeFiles/homework2.dir/functions.cpp.o"
	cd /Users/maximvasilev/CLionProjects/PR/cmake-build-debug/HW2 && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/homework2.dir/functions.cpp.o -c /Users/maximvasilev/CLionProjects/PR/HW2/functions.cpp

HW2/CMakeFiles/homework2.dir/functions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/homework2.dir/functions.cpp.i"
	cd /Users/maximvasilev/CLionProjects/PR/cmake-build-debug/HW2 && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/maximvasilev/CLionProjects/PR/HW2/functions.cpp > CMakeFiles/homework2.dir/functions.cpp.i

HW2/CMakeFiles/homework2.dir/functions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/homework2.dir/functions.cpp.s"
	cd /Users/maximvasilev/CLionProjects/PR/cmake-build-debug/HW2 && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/maximvasilev/CLionProjects/PR/HW2/functions.cpp -o CMakeFiles/homework2.dir/functions.cpp.s

# Object files for target homework2
homework2_OBJECTS = \
"CMakeFiles/homework2.dir/main2.cpp.o" \
"CMakeFiles/homework2.dir/functions.cpp.o"

# External object files for target homework2
homework2_EXTERNAL_OBJECTS =

HW2/homework2: HW2/CMakeFiles/homework2.dir/main2.cpp.o
HW2/homework2: HW2/CMakeFiles/homework2.dir/functions.cpp.o
HW2/homework2: HW2/CMakeFiles/homework2.dir/build.make
HW2/homework2: HW2/CMakeFiles/homework2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/maximvasilev/CLionProjects/PR/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable homework2"
	cd /Users/maximvasilev/CLionProjects/PR/cmake-build-debug/HW2 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/homework2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
HW2/CMakeFiles/homework2.dir/build: HW2/homework2
.PHONY : HW2/CMakeFiles/homework2.dir/build

HW2/CMakeFiles/homework2.dir/clean:
	cd /Users/maximvasilev/CLionProjects/PR/cmake-build-debug/HW2 && $(CMAKE_COMMAND) -P CMakeFiles/homework2.dir/cmake_clean.cmake
.PHONY : HW2/CMakeFiles/homework2.dir/clean

HW2/CMakeFiles/homework2.dir/depend:
	cd /Users/maximvasilev/CLionProjects/PR/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/maximvasilev/CLionProjects/PR /Users/maximvasilev/CLionProjects/PR/HW2 /Users/maximvasilev/CLionProjects/PR/cmake-build-debug /Users/maximvasilev/CLionProjects/PR/cmake-build-debug/HW2 /Users/maximvasilev/CLionProjects/PR/cmake-build-debug/HW2/CMakeFiles/homework2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : HW2/CMakeFiles/homework2.dir/depend

