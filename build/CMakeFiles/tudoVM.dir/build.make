# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.29.3/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.29.3/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/zhangenqi/Documents/github/tudoVM

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/zhangenqi/Documents/github/tudoVM/build

# Include any dependencies generated for this target.
include CMakeFiles/tudoVM.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/tudoVM.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/tudoVM.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tudoVM.dir/flags.make

CMakeFiles/tudoVM.dir/src/lexicalAnalysis.cpp.o: CMakeFiles/tudoVM.dir/flags.make
CMakeFiles/tudoVM.dir/src/lexicalAnalysis.cpp.o: /Users/zhangenqi/Documents/github/tudoVM/src/lexicalAnalysis.cpp
CMakeFiles/tudoVM.dir/src/lexicalAnalysis.cpp.o: CMakeFiles/tudoVM.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/zhangenqi/Documents/github/tudoVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tudoVM.dir/src/lexicalAnalysis.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tudoVM.dir/src/lexicalAnalysis.cpp.o -MF CMakeFiles/tudoVM.dir/src/lexicalAnalysis.cpp.o.d -o CMakeFiles/tudoVM.dir/src/lexicalAnalysis.cpp.o -c /Users/zhangenqi/Documents/github/tudoVM/src/lexicalAnalysis.cpp

CMakeFiles/tudoVM.dir/src/lexicalAnalysis.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tudoVM.dir/src/lexicalAnalysis.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zhangenqi/Documents/github/tudoVM/src/lexicalAnalysis.cpp > CMakeFiles/tudoVM.dir/src/lexicalAnalysis.cpp.i

CMakeFiles/tudoVM.dir/src/lexicalAnalysis.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tudoVM.dir/src/lexicalAnalysis.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zhangenqi/Documents/github/tudoVM/src/lexicalAnalysis.cpp -o CMakeFiles/tudoVM.dir/src/lexicalAnalysis.cpp.s

CMakeFiles/tudoVM.dir/src/main.cpp.o: CMakeFiles/tudoVM.dir/flags.make
CMakeFiles/tudoVM.dir/src/main.cpp.o: /Users/zhangenqi/Documents/github/tudoVM/src/main.cpp
CMakeFiles/tudoVM.dir/src/main.cpp.o: CMakeFiles/tudoVM.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/zhangenqi/Documents/github/tudoVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/tudoVM.dir/src/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tudoVM.dir/src/main.cpp.o -MF CMakeFiles/tudoVM.dir/src/main.cpp.o.d -o CMakeFiles/tudoVM.dir/src/main.cpp.o -c /Users/zhangenqi/Documents/github/tudoVM/src/main.cpp

CMakeFiles/tudoVM.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tudoVM.dir/src/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/zhangenqi/Documents/github/tudoVM/src/main.cpp > CMakeFiles/tudoVM.dir/src/main.cpp.i

CMakeFiles/tudoVM.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tudoVM.dir/src/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/zhangenqi/Documents/github/tudoVM/src/main.cpp -o CMakeFiles/tudoVM.dir/src/main.cpp.s

# Object files for target tudoVM
tudoVM_OBJECTS = \
"CMakeFiles/tudoVM.dir/src/lexicalAnalysis.cpp.o" \
"CMakeFiles/tudoVM.dir/src/main.cpp.o"

# External object files for target tudoVM
tudoVM_EXTERNAL_OBJECTS =

tudoVM: CMakeFiles/tudoVM.dir/src/lexicalAnalysis.cpp.o
tudoVM: CMakeFiles/tudoVM.dir/src/main.cpp.o
tudoVM: CMakeFiles/tudoVM.dir/build.make
tudoVM: CMakeFiles/tudoVM.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/zhangenqi/Documents/github/tudoVM/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable tudoVM"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tudoVM.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tudoVM.dir/build: tudoVM
.PHONY : CMakeFiles/tudoVM.dir/build

CMakeFiles/tudoVM.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tudoVM.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tudoVM.dir/clean

CMakeFiles/tudoVM.dir/depend:
	cd /Users/zhangenqi/Documents/github/tudoVM/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zhangenqi/Documents/github/tudoVM /Users/zhangenqi/Documents/github/tudoVM /Users/zhangenqi/Documents/github/tudoVM/build /Users/zhangenqi/Documents/github/tudoVM/build /Users/zhangenqi/Documents/github/tudoVM/build/CMakeFiles/tudoVM.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/tudoVM.dir/depend

