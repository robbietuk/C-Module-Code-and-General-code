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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/RobertTwyman/OneDrive/Documents/UCL/Modules/MPHY0030 - C++/Code/Messing around code"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/RobertTwyman/OneDrive/Documents/UCL/Modules/MPHY0030 - C++/Code/Messing around code/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Messing_around_code.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Messing_around_code.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Messing_around_code.dir/flags.make

CMakeFiles/Messing_around_code.dir/main.cpp.o: CMakeFiles/Messing_around_code.dir/flags.make
CMakeFiles/Messing_around_code.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/RobertTwyman/OneDrive/Documents/UCL/Modules/MPHY0030 - C++/Code/Messing around code/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Messing_around_code.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Messing_around_code.dir/main.cpp.o -c "/Users/RobertTwyman/OneDrive/Documents/UCL/Modules/MPHY0030 - C++/Code/Messing around code/main.cpp"

CMakeFiles/Messing_around_code.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Messing_around_code.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/RobertTwyman/OneDrive/Documents/UCL/Modules/MPHY0030 - C++/Code/Messing around code/main.cpp" > CMakeFiles/Messing_around_code.dir/main.cpp.i

CMakeFiles/Messing_around_code.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Messing_around_code.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/RobertTwyman/OneDrive/Documents/UCL/Modules/MPHY0030 - C++/Code/Messing around code/main.cpp" -o CMakeFiles/Messing_around_code.dir/main.cpp.s

# Object files for target Messing_around_code
Messing_around_code_OBJECTS = \
"CMakeFiles/Messing_around_code.dir/main.cpp.o"

# External object files for target Messing_around_code
Messing_around_code_EXTERNAL_OBJECTS =

Messing_around_code: CMakeFiles/Messing_around_code.dir/main.cpp.o
Messing_around_code: CMakeFiles/Messing_around_code.dir/build.make
Messing_around_code: CMakeFiles/Messing_around_code.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/RobertTwyman/OneDrive/Documents/UCL/Modules/MPHY0030 - C++/Code/Messing around code/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Messing_around_code"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Messing_around_code.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Messing_around_code.dir/build: Messing_around_code

.PHONY : CMakeFiles/Messing_around_code.dir/build

CMakeFiles/Messing_around_code.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Messing_around_code.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Messing_around_code.dir/clean

CMakeFiles/Messing_around_code.dir/depend:
	cd "/Users/RobertTwyman/OneDrive/Documents/UCL/Modules/MPHY0030 - C++/Code/Messing around code/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/RobertTwyman/OneDrive/Documents/UCL/Modules/MPHY0030 - C++/Code/Messing around code" "/Users/RobertTwyman/OneDrive/Documents/UCL/Modules/MPHY0030 - C++/Code/Messing around code" "/Users/RobertTwyman/OneDrive/Documents/UCL/Modules/MPHY0030 - C++/Code/Messing around code/cmake-build-debug" "/Users/RobertTwyman/OneDrive/Documents/UCL/Modules/MPHY0030 - C++/Code/Messing around code/cmake-build-debug" "/Users/RobertTwyman/OneDrive/Documents/UCL/Modules/MPHY0030 - C++/Code/Messing around code/cmake-build-debug/CMakeFiles/Messing_around_code.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Messing_around_code.dir/depend
