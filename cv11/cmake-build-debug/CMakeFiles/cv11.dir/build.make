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
CMAKE_SOURCE_DIR = /home/kvitajin/CLionProjects/vsb/pr/cv11

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kvitajin/CLionProjects/vsb/pr/cv11/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/cv11.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cv11.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cv11.dir/flags.make

CMakeFiles/cv11.dir/main.cpp.o: CMakeFiles/cv11.dir/flags.make
CMakeFiles/cv11.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kvitajin/CLionProjects/vsb/pr/cv11/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cv11.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cv11.dir/main.cpp.o -c /home/kvitajin/CLionProjects/vsb/pr/cv11/main.cpp

CMakeFiles/cv11.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cv11.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kvitajin/CLionProjects/vsb/pr/cv11/main.cpp > CMakeFiles/cv11.dir/main.cpp.i

CMakeFiles/cv11.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cv11.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kvitajin/CLionProjects/vsb/pr/cv11/main.cpp -o CMakeFiles/cv11.dir/main.cpp.s

CMakeFiles/cv11.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/cv11.dir/main.cpp.o.requires

CMakeFiles/cv11.dir/main.cpp.o.provides: CMakeFiles/cv11.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/cv11.dir/build.make CMakeFiles/cv11.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/cv11.dir/main.cpp.o.provides

CMakeFiles/cv11.dir/main.cpp.o.provides.build: CMakeFiles/cv11.dir/main.cpp.o


# Object files for target cv11
cv11_OBJECTS = \
"CMakeFiles/cv11.dir/main.cpp.o"

# External object files for target cv11
cv11_EXTERNAL_OBJECTS =

cv11: CMakeFiles/cv11.dir/main.cpp.o
cv11: CMakeFiles/cv11.dir/build.make
cv11: CMakeFiles/cv11.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kvitajin/CLionProjects/vsb/pr/cv11/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cv11"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cv11.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cv11.dir/build: cv11

.PHONY : CMakeFiles/cv11.dir/build

CMakeFiles/cv11.dir/requires: CMakeFiles/cv11.dir/main.cpp.o.requires

.PHONY : CMakeFiles/cv11.dir/requires

CMakeFiles/cv11.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cv11.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cv11.dir/clean

CMakeFiles/cv11.dir/depend:
	cd /home/kvitajin/CLionProjects/vsb/pr/cv11/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kvitajin/CLionProjects/vsb/pr/cv11 /home/kvitajin/CLionProjects/vsb/pr/cv11 /home/kvitajin/CLionProjects/vsb/pr/cv11/cmake-build-debug /home/kvitajin/CLionProjects/vsb/pr/cv11/cmake-build-debug /home/kvitajin/CLionProjects/vsb/pr/cv11/cmake-build-debug/CMakeFiles/cv11.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cv11.dir/depend

