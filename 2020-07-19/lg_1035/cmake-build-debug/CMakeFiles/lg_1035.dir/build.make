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
CMAKE_SOURCE_DIR = "/Volumes/[F] Windows 10 vista.hidden/sdbus/code/c++/code/OI/2020-07-19/lg_1035"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Volumes/[F] Windows 10 vista.hidden/sdbus/code/c++/code/OI/2020-07-19/lg_1035/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/lg_1035.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lg_1035.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lg_1035.dir/flags.make

CMakeFiles/lg_1035.dir/main.cpp.o: CMakeFiles/lg_1035.dir/flags.make
CMakeFiles/lg_1035.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Volumes/[F] Windows 10 vista.hidden/sdbus/code/c++/code/OI/2020-07-19/lg_1035/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lg_1035.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lg_1035.dir/main.cpp.o -c "/Volumes/[F] Windows 10 vista.hidden/sdbus/code/c++/code/OI/2020-07-19/lg_1035/main.cpp"

CMakeFiles/lg_1035.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lg_1035.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Volumes/[F] Windows 10 vista.hidden/sdbus/code/c++/code/OI/2020-07-19/lg_1035/main.cpp" > CMakeFiles/lg_1035.dir/main.cpp.i

CMakeFiles/lg_1035.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lg_1035.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Volumes/[F] Windows 10 vista.hidden/sdbus/code/c++/code/OI/2020-07-19/lg_1035/main.cpp" -o CMakeFiles/lg_1035.dir/main.cpp.s

CMakeFiles/lg_1035.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/lg_1035.dir/main.cpp.o.requires

CMakeFiles/lg_1035.dir/main.cpp.o.provides: CMakeFiles/lg_1035.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/lg_1035.dir/build.make CMakeFiles/lg_1035.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/lg_1035.dir/main.cpp.o.provides

CMakeFiles/lg_1035.dir/main.cpp.o.provides.build: CMakeFiles/lg_1035.dir/main.cpp.o


# Object files for target lg_1035
lg_1035_OBJECTS = \
"CMakeFiles/lg_1035.dir/main.cpp.o"

# External object files for target lg_1035
lg_1035_EXTERNAL_OBJECTS =

lg_1035: CMakeFiles/lg_1035.dir/main.cpp.o
lg_1035: CMakeFiles/lg_1035.dir/build.make
lg_1035: CMakeFiles/lg_1035.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Volumes/[F] Windows 10 vista.hidden/sdbus/code/c++/code/OI/2020-07-19/lg_1035/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable lg_1035"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lg_1035.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lg_1035.dir/build: lg_1035

.PHONY : CMakeFiles/lg_1035.dir/build

CMakeFiles/lg_1035.dir/requires: CMakeFiles/lg_1035.dir/main.cpp.o.requires

.PHONY : CMakeFiles/lg_1035.dir/requires

CMakeFiles/lg_1035.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lg_1035.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lg_1035.dir/clean

CMakeFiles/lg_1035.dir/depend:
	cd "/Volumes/[F] Windows 10 vista.hidden/sdbus/code/c++/code/OI/2020-07-19/lg_1035/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Volumes/[F] Windows 10 vista.hidden/sdbus/code/c++/code/OI/2020-07-19/lg_1035" "/Volumes/[F] Windows 10 vista.hidden/sdbus/code/c++/code/OI/2020-07-19/lg_1035" "/Volumes/[F] Windows 10 vista.hidden/sdbus/code/c++/code/OI/2020-07-19/lg_1035/cmake-build-debug" "/Volumes/[F] Windows 10 vista.hidden/sdbus/code/c++/code/OI/2020-07-19/lg_1035/cmake-build-debug" "/Volumes/[F] Windows 10 vista.hidden/sdbus/code/c++/code/OI/2020-07-19/lg_1035/cmake-build-debug/CMakeFiles/lg_1035.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/lg_1035.dir/depend

