# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/shirehan_medhat/Cmake_Task/Abstraction/Static

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/shirehan_medhat/Cmake_Task/Abstraction/Static/build

# Include any dependencies generated for this target.
include lib/CMakeFiles/operation.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include lib/CMakeFiles/operation.dir/compiler_depend.make

# Include the progress variables for this target.
include lib/CMakeFiles/operation.dir/progress.make

# Include the compile flags for this target's objects.
include lib/CMakeFiles/operation.dir/flags.make

lib/CMakeFiles/operation.dir/addition.c.o: lib/CMakeFiles/operation.dir/flags.make
lib/CMakeFiles/operation.dir/addition.c.o: ../lib/addition.c
lib/CMakeFiles/operation.dir/addition.c.o: lib/CMakeFiles/operation.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shirehan_medhat/Cmake_Task/Abstraction/Static/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object lib/CMakeFiles/operation.dir/addition.c.o"
	cd /home/shirehan_medhat/Cmake_Task/Abstraction/Static/build/lib && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT lib/CMakeFiles/operation.dir/addition.c.o -MF CMakeFiles/operation.dir/addition.c.o.d -o CMakeFiles/operation.dir/addition.c.o -c /home/shirehan_medhat/Cmake_Task/Abstraction/Static/lib/addition.c

lib/CMakeFiles/operation.dir/addition.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/operation.dir/addition.c.i"
	cd /home/shirehan_medhat/Cmake_Task/Abstraction/Static/build/lib && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/shirehan_medhat/Cmake_Task/Abstraction/Static/lib/addition.c > CMakeFiles/operation.dir/addition.c.i

lib/CMakeFiles/operation.dir/addition.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/operation.dir/addition.c.s"
	cd /home/shirehan_medhat/Cmake_Task/Abstraction/Static/build/lib && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/shirehan_medhat/Cmake_Task/Abstraction/Static/lib/addition.c -o CMakeFiles/operation.dir/addition.c.s

lib/CMakeFiles/operation.dir/division.c.o: lib/CMakeFiles/operation.dir/flags.make
lib/CMakeFiles/operation.dir/division.c.o: ../lib/division.c
lib/CMakeFiles/operation.dir/division.c.o: lib/CMakeFiles/operation.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shirehan_medhat/Cmake_Task/Abstraction/Static/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object lib/CMakeFiles/operation.dir/division.c.o"
	cd /home/shirehan_medhat/Cmake_Task/Abstraction/Static/build/lib && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT lib/CMakeFiles/operation.dir/division.c.o -MF CMakeFiles/operation.dir/division.c.o.d -o CMakeFiles/operation.dir/division.c.o -c /home/shirehan_medhat/Cmake_Task/Abstraction/Static/lib/division.c

lib/CMakeFiles/operation.dir/division.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/operation.dir/division.c.i"
	cd /home/shirehan_medhat/Cmake_Task/Abstraction/Static/build/lib && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/shirehan_medhat/Cmake_Task/Abstraction/Static/lib/division.c > CMakeFiles/operation.dir/division.c.i

lib/CMakeFiles/operation.dir/division.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/operation.dir/division.c.s"
	cd /home/shirehan_medhat/Cmake_Task/Abstraction/Static/build/lib && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/shirehan_medhat/Cmake_Task/Abstraction/Static/lib/division.c -o CMakeFiles/operation.dir/division.c.s

lib/CMakeFiles/operation.dir/modulus.c.o: lib/CMakeFiles/operation.dir/flags.make
lib/CMakeFiles/operation.dir/modulus.c.o: ../lib/modulus.c
lib/CMakeFiles/operation.dir/modulus.c.o: lib/CMakeFiles/operation.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shirehan_medhat/Cmake_Task/Abstraction/Static/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object lib/CMakeFiles/operation.dir/modulus.c.o"
	cd /home/shirehan_medhat/Cmake_Task/Abstraction/Static/build/lib && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT lib/CMakeFiles/operation.dir/modulus.c.o -MF CMakeFiles/operation.dir/modulus.c.o.d -o CMakeFiles/operation.dir/modulus.c.o -c /home/shirehan_medhat/Cmake_Task/Abstraction/Static/lib/modulus.c

lib/CMakeFiles/operation.dir/modulus.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/operation.dir/modulus.c.i"
	cd /home/shirehan_medhat/Cmake_Task/Abstraction/Static/build/lib && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/shirehan_medhat/Cmake_Task/Abstraction/Static/lib/modulus.c > CMakeFiles/operation.dir/modulus.c.i

lib/CMakeFiles/operation.dir/modulus.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/operation.dir/modulus.c.s"
	cd /home/shirehan_medhat/Cmake_Task/Abstraction/Static/build/lib && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/shirehan_medhat/Cmake_Task/Abstraction/Static/lib/modulus.c -o CMakeFiles/operation.dir/modulus.c.s

lib/CMakeFiles/operation.dir/multiplication.c.o: lib/CMakeFiles/operation.dir/flags.make
lib/CMakeFiles/operation.dir/multiplication.c.o: ../lib/multiplication.c
lib/CMakeFiles/operation.dir/multiplication.c.o: lib/CMakeFiles/operation.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shirehan_medhat/Cmake_Task/Abstraction/Static/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object lib/CMakeFiles/operation.dir/multiplication.c.o"
	cd /home/shirehan_medhat/Cmake_Task/Abstraction/Static/build/lib && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT lib/CMakeFiles/operation.dir/multiplication.c.o -MF CMakeFiles/operation.dir/multiplication.c.o.d -o CMakeFiles/operation.dir/multiplication.c.o -c /home/shirehan_medhat/Cmake_Task/Abstraction/Static/lib/multiplication.c

lib/CMakeFiles/operation.dir/multiplication.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/operation.dir/multiplication.c.i"
	cd /home/shirehan_medhat/Cmake_Task/Abstraction/Static/build/lib && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/shirehan_medhat/Cmake_Task/Abstraction/Static/lib/multiplication.c > CMakeFiles/operation.dir/multiplication.c.i

lib/CMakeFiles/operation.dir/multiplication.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/operation.dir/multiplication.c.s"
	cd /home/shirehan_medhat/Cmake_Task/Abstraction/Static/build/lib && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/shirehan_medhat/Cmake_Task/Abstraction/Static/lib/multiplication.c -o CMakeFiles/operation.dir/multiplication.c.s

lib/CMakeFiles/operation.dir/subtraction.c.o: lib/CMakeFiles/operation.dir/flags.make
lib/CMakeFiles/operation.dir/subtraction.c.o: ../lib/subtraction.c
lib/CMakeFiles/operation.dir/subtraction.c.o: lib/CMakeFiles/operation.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shirehan_medhat/Cmake_Task/Abstraction/Static/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object lib/CMakeFiles/operation.dir/subtraction.c.o"
	cd /home/shirehan_medhat/Cmake_Task/Abstraction/Static/build/lib && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT lib/CMakeFiles/operation.dir/subtraction.c.o -MF CMakeFiles/operation.dir/subtraction.c.o.d -o CMakeFiles/operation.dir/subtraction.c.o -c /home/shirehan_medhat/Cmake_Task/Abstraction/Static/lib/subtraction.c

lib/CMakeFiles/operation.dir/subtraction.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/operation.dir/subtraction.c.i"
	cd /home/shirehan_medhat/Cmake_Task/Abstraction/Static/build/lib && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/shirehan_medhat/Cmake_Task/Abstraction/Static/lib/subtraction.c > CMakeFiles/operation.dir/subtraction.c.i

lib/CMakeFiles/operation.dir/subtraction.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/operation.dir/subtraction.c.s"
	cd /home/shirehan_medhat/Cmake_Task/Abstraction/Static/build/lib && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/shirehan_medhat/Cmake_Task/Abstraction/Static/lib/subtraction.c -o CMakeFiles/operation.dir/subtraction.c.s

# Object files for target operation
operation_OBJECTS = \
"CMakeFiles/operation.dir/addition.c.o" \
"CMakeFiles/operation.dir/division.c.o" \
"CMakeFiles/operation.dir/modulus.c.o" \
"CMakeFiles/operation.dir/multiplication.c.o" \
"CMakeFiles/operation.dir/subtraction.c.o"

# External object files for target operation
operation_EXTERNAL_OBJECTS =

lib/liboperation.a: lib/CMakeFiles/operation.dir/addition.c.o
lib/liboperation.a: lib/CMakeFiles/operation.dir/division.c.o
lib/liboperation.a: lib/CMakeFiles/operation.dir/modulus.c.o
lib/liboperation.a: lib/CMakeFiles/operation.dir/multiplication.c.o
lib/liboperation.a: lib/CMakeFiles/operation.dir/subtraction.c.o
lib/liboperation.a: lib/CMakeFiles/operation.dir/build.make
lib/liboperation.a: lib/CMakeFiles/operation.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/shirehan_medhat/Cmake_Task/Abstraction/Static/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking C static library liboperation.a"
	cd /home/shirehan_medhat/Cmake_Task/Abstraction/Static/build/lib && $(CMAKE_COMMAND) -P CMakeFiles/operation.dir/cmake_clean_target.cmake
	cd /home/shirehan_medhat/Cmake_Task/Abstraction/Static/build/lib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/operation.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/CMakeFiles/operation.dir/build: lib/liboperation.a
.PHONY : lib/CMakeFiles/operation.dir/build

lib/CMakeFiles/operation.dir/clean:
	cd /home/shirehan_medhat/Cmake_Task/Abstraction/Static/build/lib && $(CMAKE_COMMAND) -P CMakeFiles/operation.dir/cmake_clean.cmake
.PHONY : lib/CMakeFiles/operation.dir/clean

lib/CMakeFiles/operation.dir/depend:
	cd /home/shirehan_medhat/Cmake_Task/Abstraction/Static/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/shirehan_medhat/Cmake_Task/Abstraction/Static /home/shirehan_medhat/Cmake_Task/Abstraction/Static/lib /home/shirehan_medhat/Cmake_Task/Abstraction/Static/build /home/shirehan_medhat/Cmake_Task/Abstraction/Static/build/lib /home/shirehan_medhat/Cmake_Task/Abstraction/Static/build/lib/CMakeFiles/operation.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/CMakeFiles/operation.dir/depend

