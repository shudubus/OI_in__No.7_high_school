# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Volumes/[E] Windows  8.1/sdbus/code/c++/code/OI/2020-08-03/gaojing_multiplication"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Volumes/[E] Windows  8.1/sdbus/code/c++/code/OI/2020-08-03/gaojing_multiplication/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/gaojing_multiplication.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/gaojing_multiplication.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/gaojing_multiplication.dir/flags.make

CMakeFiles/gaojing_multiplication.dir/main.cpp.o: CMakeFiles/gaojing_multiplication.dir/flags.make
CMakeFiles/gaojing_multiplication.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Volumes/[E] Windows  8.1/sdbus/code/c++/code/OI/2020-08-03/gaojing_multiplication/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/gaojing_multiplication.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gaojing_multiplication.dir/main.cpp.o -c "/Volumes/[E] Windows  8.1/sdbus/code/c++/code/OI/2020-08-03/gaojing_multiplication/main.cpp"

CMakeFiles/gaojing_multiplication.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gaojing_multiplication.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Volumes/[E] Windows  8.1/sdbus/code/c++/code/OI/2020-08-03/gaojing_multiplication/main.cpp" > CMakeFiles/gaojing_multiplication.dir/main.cpp.i

CMakeFiles/gaojing_multiplication.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gaojing_multiplication.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Volumes/[E] Windows  8.1/sdbus/code/c++/code/OI/2020-08-03/gaojing_multiplication/main.cpp" -o CMakeFiles/gaojing_multiplication.dir/main.cpp.s

CMakeFiles/gaojing_multiplication.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/gaojing_multiplication.dir/main.cpp.o.requires

CMakeFiles/gaojing_multiplication.dir/main.cpp.o.provides: CMakeFiles/gaojing_multiplication.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/gaojing_multiplication.dir/build.make CMakeFiles/gaojing_multiplication.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/gaojing_multiplication.dir/main.cpp.o.provides

CMakeFiles/gaojing_multiplication.dir/main.cpp.o.provides.build: CMakeFiles/gaojing_multiplication.dir/main.cpp.o


# Object files for target gaojing_multiplication
gaojing_multiplication_OBJECTS = \
"CMakeFiles/gaojing_multiplication.dir/main.cpp.o"

# External object files for target gaojing_multiplication
gaojing_multiplication_EXTERNAL_OBJECTS =

gaojing_multiplication: CMakeFiles/gaojing_multiplication.dir/main.cpp.o
gaojing_multiplication: CMakeFiles/gaojing_multiplication.dir/build.make
gaojing_multiplication: CMakeFiles/gaojing_multiplication.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Volumes/[E] Windows  8.1/sdbus/code/c++/code/OI/2020-08-03/gaojing_multiplication/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable gaojing_multiplication"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gaojing_multiplication.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/gaojing_multiplication.dir/build: gaojing_multiplication

.PHONY : CMakeFiles/gaojing_multiplication.dir/build

CMakeFiles/gaojing_multiplication.dir/requires: CMakeFiles/gaojing_multiplication.dir/main.cpp.o.requires

.PHONY : CMakeFiles/gaojing_multiplication.dir/requires

CMakeFiles/gaojing_multiplication.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/gaojing_multiplication.dir/cmake_clean.cmake
.PHONY : CMakeFiles/gaojing_multiplication.dir/clean

CMakeFiles/gaojing_multiplication.dir/depend:
	cd "/Volumes/[E] Windows  8.1/sdbus/code/c++/code/OI/2020-08-03/gaojing_multiplication/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Volumes/[E] Windows  8.1/sdbus/code/c++/code/OI/2020-08-03/gaojing_multiplication" "/Volumes/[E] Windows  8.1/sdbus/code/c++/code/OI/2020-08-03/gaojing_multiplication" "/Volumes/[E] Windows  8.1/sdbus/code/c++/code/OI/2020-08-03/gaojing_multiplication/cmake-build-debug" "/Volumes/[E] Windows  8.1/sdbus/code/c++/code/OI/2020-08-03/gaojing_multiplication/cmake-build-debug" "/Volumes/[E] Windows  8.1/sdbus/code/c++/code/OI/2020-08-03/gaojing_multiplication/cmake-build-debug/CMakeFiles/gaojing_multiplication.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/gaojing_multiplication.dir/depend
