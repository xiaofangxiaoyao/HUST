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
CMAKE_SOURCE_DIR = C:\Users\24283\SavingFile\code\HUST\FILEjiaMI

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\24283\SavingFile\code\HUST\FILEjiaMI\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/FILEjiaMI.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/FILEjiaMI.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/FILEjiaMI.dir/flags.make

CMakeFiles/FILEjiaMI.dir/main.c.obj: CMakeFiles/FILEjiaMI.dir/flags.make
CMakeFiles/FILEjiaMI.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\24283\SavingFile\code\HUST\FILEjiaMI\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/FILEjiaMI.dir/main.c.obj"
	C:\PROGRA~2\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\FILEjiaMI.dir\main.c.obj   -c C:\Users\24283\SavingFile\code\HUST\FILEjiaMI\main.c

CMakeFiles/FILEjiaMI.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/FILEjiaMI.dir/main.c.i"
	C:\PROGRA~2\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\24283\SavingFile\code\HUST\FILEjiaMI\main.c > CMakeFiles\FILEjiaMI.dir\main.c.i

CMakeFiles/FILEjiaMI.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/FILEjiaMI.dir/main.c.s"
	C:\PROGRA~2\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\24283\SavingFile\code\HUST\FILEjiaMI\main.c -o CMakeFiles\FILEjiaMI.dir\main.c.s

# Object files for target FILEjiaMI
FILEjiaMI_OBJECTS = \
"CMakeFiles/FILEjiaMI.dir/main.c.obj"

# External object files for target FILEjiaMI
FILEjiaMI_EXTERNAL_OBJECTS =

FILEjiaMI.exe: CMakeFiles/FILEjiaMI.dir/main.c.obj
FILEjiaMI.exe: CMakeFiles/FILEjiaMI.dir/build.make
FILEjiaMI.exe: CMakeFiles/FILEjiaMI.dir/linklibs.rsp
FILEjiaMI.exe: CMakeFiles/FILEjiaMI.dir/objects1.rsp
FILEjiaMI.exe: CMakeFiles/FILEjiaMI.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\24283\SavingFile\code\HUST\FILEjiaMI\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable FILEjiaMI.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\FILEjiaMI.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/FILEjiaMI.dir/build: FILEjiaMI.exe

.PHONY : CMakeFiles/FILEjiaMI.dir/build

CMakeFiles/FILEjiaMI.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\FILEjiaMI.dir\cmake_clean.cmake
.PHONY : CMakeFiles/FILEjiaMI.dir/clean

CMakeFiles/FILEjiaMI.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\24283\SavingFile\code\HUST\FILEjiaMI C:\Users\24283\SavingFile\code\HUST\FILEjiaMI C:\Users\24283\SavingFile\code\HUST\FILEjiaMI\cmake-build-debug C:\Users\24283\SavingFile\code\HUST\FILEjiaMI\cmake-build-debug C:\Users\24283\SavingFile\code\HUST\FILEjiaMI\cmake-build-debug\CMakeFiles\FILEjiaMI.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/FILEjiaMI.dir/depend

