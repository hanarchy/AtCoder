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
CMAKE_COMMAND = /cygdrive/c/Users/hanarchy/.CLion2018.1/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/hanarchy/.CLion2018.1/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/hanarchy/CLionProjects/AtCoder/other/ARC076C

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/hanarchy/CLionProjects/AtCoder/other/ARC076C/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/atc.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/atc.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/atc.dir/flags.make

CMakeFiles/atc.dir/fn.cc.o: CMakeFiles/atc.dir/flags.make
CMakeFiles/atc.dir/fn.cc.o: ../fn.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/hanarchy/CLionProjects/AtCoder/other/ARC076C/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/atc.dir/fn.cc.o"
	C:/cygwin64/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/atc.dir/fn.cc.o -c /cygdrive/c/Users/hanarchy/CLionProjects/AtCoder/other/ARC076C/fn.cc

CMakeFiles/atc.dir/fn.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/atc.dir/fn.cc.i"
	C:/cygwin64/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/hanarchy/CLionProjects/AtCoder/other/ARC076C/fn.cc > CMakeFiles/atc.dir/fn.cc.i

CMakeFiles/atc.dir/fn.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/atc.dir/fn.cc.s"
	C:/cygwin64/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/hanarchy/CLionProjects/AtCoder/other/ARC076C/fn.cc -o CMakeFiles/atc.dir/fn.cc.s

CMakeFiles/atc.dir/fn.cc.o.requires:

.PHONY : CMakeFiles/atc.dir/fn.cc.o.requires

CMakeFiles/atc.dir/fn.cc.o.provides: CMakeFiles/atc.dir/fn.cc.o.requires
	$(MAKE) -f CMakeFiles/atc.dir/build.make CMakeFiles/atc.dir/fn.cc.o.provides.build
.PHONY : CMakeFiles/atc.dir/fn.cc.o.provides

CMakeFiles/atc.dir/fn.cc.o.provides.build: CMakeFiles/atc.dir/fn.cc.o


# Object files for target atc
atc_OBJECTS = \
"CMakeFiles/atc.dir/fn.cc.o"

# External object files for target atc
atc_EXTERNAL_OBJECTS =

atc.exe: CMakeFiles/atc.dir/fn.cc.o
atc.exe: CMakeFiles/atc.dir/build.make
atc.exe: CMakeFiles/atc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/hanarchy/CLionProjects/AtCoder/other/ARC076C/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable atc.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/atc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/atc.dir/build: atc.exe

.PHONY : CMakeFiles/atc.dir/build

CMakeFiles/atc.dir/requires: CMakeFiles/atc.dir/fn.cc.o.requires

.PHONY : CMakeFiles/atc.dir/requires

CMakeFiles/atc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/atc.dir/cmake_clean.cmake
.PHONY : CMakeFiles/atc.dir/clean

CMakeFiles/atc.dir/depend:
	cd /cygdrive/c/Users/hanarchy/CLionProjects/AtCoder/other/ARC076C/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/hanarchy/CLionProjects/AtCoder/other/ARC076C /cygdrive/c/Users/hanarchy/CLionProjects/AtCoder/other/ARC076C /cygdrive/c/Users/hanarchy/CLionProjects/AtCoder/other/ARC076C/cmake-build-debug /cygdrive/c/Users/hanarchy/CLionProjects/AtCoder/other/ARC076C/cmake-build-debug /cygdrive/c/Users/hanarchy/CLionProjects/AtCoder/other/ARC076C/cmake-build-debug/CMakeFiles/atc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/atc.dir/depend

