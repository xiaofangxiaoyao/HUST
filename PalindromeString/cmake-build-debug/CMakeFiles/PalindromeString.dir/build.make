# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\24283\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\203.7148.70\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\24283\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\203.7148.70\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\24283\SavingFile\code\HUST\PalindromeString

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\24283\SavingFile\code\HUST\PalindromeString\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/PalindromeString.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/PalindromeString.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PalindromeString.dir/flags.make

CMakeFiles/PalindromeString.dir/main.c.obj: CMakeFiles/PalindromeString.dir/flags.make
CMakeFiles/PalindromeString.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\24283\SavingFile\code\HUST\PalindromeString\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/PalindromeString.dir/main.c.obj"
	C:\PROGRA~2\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\PalindromeString.dir\main.c.obj   -c C:\Users\24283\SavingFile\code\HUST\PalindromeString\main.c

CMakeFiles/PalindromeString.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/PalindromeString.dir/main.c.i"
	C:\PROGRA~2\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\24283\SavingFile\code\HUST\PalindromeString\main.c > CMakeFiles\PalindromeString.dir\main.c.i

CMakeFiles/PalindromeString.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/PalindromeString.dir/main.c.s"
	C:\PROGRA~2\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\24283\SavingFile\code\HUST\PalindromeString\main.c -o CMakeFiles\PalindromeString.dir\main.c.s

# Object files for target PalindromeString
PalindromeString_OBJECTS = \
"CMakeFiles/PalindromeString.dir/main.c.obj"

# External object files for target PalindromeString
PalindromeString_EXTERNAL_OBJECTS =

PalindromeString.exe: CMakeFiles/PalindromeString.dir/main.c.obj
PalindromeString.exe: CMakeFiles/PalindromeString.dir/build.make
PalindromeString.exe: CMakeFiles/PalindromeString.dir/linklibs.rsp
PalindromeString.exe: CMakeFiles/PalindromeString.dir/objects1.rsp
PalindromeString.exe: CMakeFiles/PalindromeString.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\24283\SavingFile\code\HUST\PalindromeString\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable PalindromeString.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\PalindromeString.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PalindromeString.dir/build: PalindromeString.exe

.PHONY : CMakeFiles/PalindromeString.dir/build

CMakeFiles/PalindromeString.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\PalindromeString.dir\cmake_clean.cmake
.PHONY : CMakeFiles/PalindromeString.dir/clean

CMakeFiles/PalindromeString.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\24283\SavingFile\code\HUST\PalindromeString C:\Users\24283\SavingFile\code\HUST\PalindromeString C:\Users\24283\SavingFile\code\HUST\PalindromeString\cmake-build-debug C:\Users\24283\SavingFile\code\HUST\PalindromeString\cmake-build-debug C:\Users\24283\SavingFile\code\HUST\PalindromeString\cmake-build-debug\CMakeFiles\PalindromeString.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PalindromeString.dir/depend
