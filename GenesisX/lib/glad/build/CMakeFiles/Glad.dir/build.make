# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.27.1/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.27.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/akashmadhu/dev/GenesisX/lib/glad

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/akashmadhu/dev/GenesisX/lib/glad/build

# Include any dependencies generated for this target.
include CMakeFiles/Glad.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Glad.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Glad.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Glad.dir/flags.make

CMakeFiles/Glad.dir/src/glad.c.o: CMakeFiles/Glad.dir/flags.make
CMakeFiles/Glad.dir/src/glad.c.o: /Users/akashmadhu/dev/GenesisX/lib/glad/src/glad.c
CMakeFiles/Glad.dir/src/glad.c.o: CMakeFiles/Glad.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/akashmadhu/dev/GenesisX/lib/glad/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Glad.dir/src/glad.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Glad.dir/src/glad.c.o -MF CMakeFiles/Glad.dir/src/glad.c.o.d -o CMakeFiles/Glad.dir/src/glad.c.o -c /Users/akashmadhu/dev/GenesisX/lib/glad/src/glad.c

CMakeFiles/Glad.dir/src/glad.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/Glad.dir/src/glad.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/akashmadhu/dev/GenesisX/lib/glad/src/glad.c > CMakeFiles/Glad.dir/src/glad.c.i

CMakeFiles/Glad.dir/src/glad.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/Glad.dir/src/glad.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/akashmadhu/dev/GenesisX/lib/glad/src/glad.c -o CMakeFiles/Glad.dir/src/glad.c.s

# Object files for target Glad
Glad_OBJECTS = \
"CMakeFiles/Glad.dir/src/glad.c.o"

# External object files for target Glad
Glad_EXTERNAL_OBJECTS =

libGlad.a: CMakeFiles/Glad.dir/src/glad.c.o
libGlad.a: CMakeFiles/Glad.dir/build.make
libGlad.a: CMakeFiles/Glad.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/akashmadhu/dev/GenesisX/lib/glad/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library libGlad.a"
	$(CMAKE_COMMAND) -P CMakeFiles/Glad.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Glad.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Glad.dir/build: libGlad.a
.PHONY : CMakeFiles/Glad.dir/build

CMakeFiles/Glad.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Glad.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Glad.dir/clean

CMakeFiles/Glad.dir/depend:
	cd /Users/akashmadhu/dev/GenesisX/lib/glad/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/akashmadhu/dev/GenesisX/lib/glad /Users/akashmadhu/dev/GenesisX/lib/glad /Users/akashmadhu/dev/GenesisX/lib/glad/build /Users/akashmadhu/dev/GenesisX/lib/glad/build /Users/akashmadhu/dev/GenesisX/lib/glad/build/CMakeFiles/Glad.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Glad.dir/depend
