# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /home/kvitajin/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/172.4343.16/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/kvitajin/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/172.4343.16/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kvitajin/CLionProjects/vsb/pr/soutez

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kvitajin/CLionProjects/vsb/pr/soutez/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/soutez.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/soutez.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/soutez.dir/flags.make

CMakeFiles/soutez.dir/main.cpp.o: CMakeFiles/soutez.dir/flags.make
CMakeFiles/soutez.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kvitajin/CLionProjects/vsb/pr/soutez/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/soutez.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/soutez.dir/main.cpp.o -c /home/kvitajin/CLionProjects/vsb/pr/soutez/main.cpp

CMakeFiles/soutez.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/soutez.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kvitajin/CLionProjects/vsb/pr/soutez/main.cpp > CMakeFiles/soutez.dir/main.cpp.i

CMakeFiles/soutez.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/soutez.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kvitajin/CLionProjects/vsb/pr/soutez/main.cpp -o CMakeFiles/soutez.dir/main.cpp.s

CMakeFiles/soutez.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/soutez.dir/main.cpp.o.requires

CMakeFiles/soutez.dir/main.cpp.o.provides: CMakeFiles/soutez.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/soutez.dir/build.make CMakeFiles/soutez.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/soutez.dir/main.cpp.o.provides

CMakeFiles/soutez.dir/main.cpp.o.provides.build: CMakeFiles/soutez.dir/main.cpp.o


# Object files for target soutez
soutez_OBJECTS = \
"CMakeFiles/soutez.dir/main.cpp.o"

# External object files for target soutez
soutez_EXTERNAL_OBJECTS =

soutez: CMakeFiles/soutez.dir/main.cpp.o
soutez: CMakeFiles/soutez.dir/build.make
soutez: CMakeFiles/soutez.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kvitajin/CLionProjects/vsb/pr/soutez/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable soutez"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/soutez.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/soutez.dir/build: soutez

.PHONY : CMakeFiles/soutez.dir/build

CMakeFiles/soutez.dir/requires: CMakeFiles/soutez.dir/main.cpp.o.requires

.PHONY : CMakeFiles/soutez.dir/requires

CMakeFiles/soutez.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/soutez.dir/cmake_clean.cmake
.PHONY : CMakeFiles/soutez.dir/clean

CMakeFiles/soutez.dir/depend:
	cd /home/kvitajin/CLionProjects/vsb/pr/soutez/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kvitajin/CLionProjects/vsb/pr/soutez /home/kvitajin/CLionProjects/vsb/pr/soutez /home/kvitajin/CLionProjects/vsb/pr/soutez/cmake-build-debug /home/kvitajin/CLionProjects/vsb/pr/soutez/cmake-build-debug /home/kvitajin/CLionProjects/vsb/pr/soutez/cmake-build-debug/CMakeFiles/soutez.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/soutez.dir/depend

