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
CMAKE_SOURCE_DIR = /home/shirehan_medhat/Cmake_Task/No_Abstraction/Static

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/shirehan_medhat/Cmake_Task/No_Abstraction/Static/build

# Include any dependencies generated for this target.
include CMakeFiles/operation.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/operation.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/operation.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/operation.dir/flags.make

CMakeFiles/operation.dir/lib/addition.c.o: CMakeFiles/operation.dir/flags.make
CMakeFiles/operation.dir/lib/addition.c.o: ../lib/addition.c
CMakeFiles/operation.dir/lib/addition.c.o: CMakeFiles/operation.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shirehan_medhat/Cmake_Task/No_Abstraction/Static/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/operation.dir/lib/addition.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/operation.dir/lib/addition.c.o -MF CMakeFiles/operation.dir/lib/addition.c.o.d -o CMakeFiles/operation.dir/lib/addition.c.o -c /home/shirehan_medhat/Cmake_Task/No_Abstraction/Static/lib/addition.c

CMakeFiles/operation.dir/lib/addition.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/operation.dir/lib/addition.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/shirehan_medhat/Cmake_Task/No_Abstraction/Static/lib/addition.c > CMakeFiles/operation.dir/lib/addition.c.i

CMakeFiles/operation.dir/lib/addition.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/operation.dir/lib/addition.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/shirehan_medhat/Cmake_Task/No_Abstraction/Static/lib/addition.c -o CMakeFiles/operation.dir/lib/addition.c.s

CMakeFiles/operation.dir/lib/division.c.o: CMakeFiles/operation.dir/flags.make
CMakeFiles/operation.dir/lib/division.c.o: ../lib/division.c
CMakeFiles/operation.dir/lib/division.c.o: CMakeFiles/operation.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shirehan_medhat/Cmake_Task/No_Abstraction/Static/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/operation.dir/lib/division.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/operation.dir/lib/division.c.o -MF CMakeFiles/operation.dir/lib/division.c.o.d -o CMakeFiles/operation.dir/lib/division.c.o -c /home/shirehan_medhat/Cmake_Task/No_Abstraction/Static/lib/division.c

CMakeFiles/operation.dir/lib/division.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/operation.dir/lib/division.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/shirehan_medhat/Cmake_Task/No_Abstraction/Static/lib/division.c > CMakeFiles/operation.dir/lib/division.c.i

CMakeFiles/operation.dir/lib/division.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/operation.dir/lib/division.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/shirehan_medhat/Cmake_Task/No_Abstraction/Static/lib/division.c -o CMakeFiles/operation.dir/lib/division.c.s

CMakeFiles/operation.dir/lib/modulus.c.o: CMakeFiles/operation.dir/flags.make
CMakeFiles/operation.dir/lib/modulus.c.o: ../lib/modulus.c
CMakeFiles/operation.dir/lib/modulus.c.o: CMakeFiles/operation.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shirehan_medhat/Cmake_Task/No_Abstraction/Static/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/operation.dir/lib/modulus.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/operation.dir/lib/modulus.c.o -MF CMakeFiles/operation.dir/lib/modulus.c.o.d -o CMakeFiles/operation.dir/lib/modulus.c.o -c /home/shirehan_medhat/Cmake_Task/No_Abstraction/Static/lib/modulus.c

CMakeFiles/operation.dir/lib/modulus.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/operation.dir/lib/modulus.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/shirehan_medhat/Cmake_Task/No_Abstraction/Static/lib/modulus.c > CMakeFiles/operation.dir/lib/modulus.c.i

CMakeFiles/operation.dir/lib/modulus.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/operation.dir/lib/modulus.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/shirehan_medhat/Cmake_Task/No_Abstraction/Static/lib/modulus.c -o CMakeFiles/operation.dir/lib/modulus.c.s

CMakeFiles/operation.dir/lib/multiplication.c.o: CMakeFiles/operation.dir/flags.make
CMakeFiles/operation.dir/lib/multiplication.c.o: ../lib/multiplication.c
CMakeFiles/operation.dir/lib/multiplication.c.o: CMakeFiles/operation.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shirehan_medhat/Cmake_Task/No_Abstraction/Static/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/operation.dir/lib/multiplication.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/operation.dir/lib/multiplication.c.o -MF CMakeFiles/operation.dir/lib/multiplication.c.o.d -o CMakeFiles/operation.dir/lib/multiplication.c.o -c /home/shirehan_medhat/Cmake_Task/No_Abstraction/Static/lib/multiplication.c

CMakeFiles/operation.dir/lib/multiplication.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/operation.dir/lib/multiplication.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/shirehan_medhat/Cmake_Task/No_Abstraction/Static/lib/multiplication.c > CMakeFiles/operation.dir/lib/multiplication.c.i

CMakeFiles/operation.dir/lib/multiplication.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/operation.dir/lib/multiplication.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/shirehan_medhat/Cmake_Task/No_Abstraction/Static/lib/multiplication.c -o CMakeFiles/operation.dir/lib/multiplication.c.s

CMakeFiles/operation.dir/lib/subtraction.c.o: CMakeFiles/operation.dir/flags.make
CMakeFiles/operation.dir/lib/subtraction.c.o: ../lib/subtraction.c
CMakeFiles/operation.dir/lib/subtraction.c.o: CMakeFiles/operation.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shirehan_medhat/Cmake_Task/No_Abstraction/Static/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/operation.dir/lib/subtraction.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/operation.dir/lib/subtraction.c.o -MF CMakeFiles/operation.dir/lib/subtraction.c.o.d -o CMakeFiles/operation.dir/lib/subtraction.c.o -c /home/shirehan_medhat/Cmake_Task/No_Abstraction/Static/lib/subtraction.c

CMakeFiles/operation.dir/lib/subtraction.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/operation.dir/lib/subtraction.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/shirehan_medhat/Cmake_Task/No_Abstraction/Static/lib/subtraction.c > CMakeFiles/operation.dir/lib/subtraction.c.i

CMakeFiles/operation.dir/lib/subtraction.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/operation.dir/lib/subtraction.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/shirehan_medhat/Cmake_Task/No_Abstraction/Static/lib/subtraction.c -o CMakeFiles/operation.dir/lib/subtraction.c.s

# Object files for target operation
operation_OBJECTS = \
"CMakeFiles/operation.dir/lib/addition.c.o" \
"CMakeFiles/operation.dir/lib/division.c.o" \
"CMakeFiles/operation.dir/lib/modulus.c.o" \
"CMakeFiles/operation.dir/lib/multiplication.c.o" \
"CMakeFiles/operation.dir/lib/subtraction.c.o"

# External object files for target operation
operation_EXTERNAL_OBJECTS =

liboperation.a: CMakeFiles/operation.dir/lib/addition.c.o
liboperation.a: CMakeFiles/operation.dir/lib/division.c.o
liboperation.a: CMakeFiles/operation.dir/lib/modulus.c.o
liboperation.a: CMakeFiles/operation.dir/lib/multiplication.c.o
liboperation.a: CMakeFiles/operation.dir/lib/subtraction.c.o
liboperation.a: CMakeFiles/operation.dir/build.make
liboperation.a: CMakeFiles/operation.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/shirehan_medhat/Cmake_Task/No_Abstraction/Static/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking C static library liboperation.a"
	$(CMAKE_COMMAND) -P CMakeFiles/operation.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/operation.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/operation.dir/build: liboperation.a
.PHONY : CMakeFiles/operation.dir/build

CMakeFiles/operation.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/operation.dir/cmake_clean.cmake
.PHONY : CMakeFiles/operation.dir/clean

CMakeFiles/operation.dir/depend:
	cd /home/shirehan_medhat/Cmake_Task/No_Abstraction/Static/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/shirehan_medhat/Cmake_Task/No_Abstraction/Static /home/shirehan_medhat/Cmake_Task/No_Abstraction/Static /home/shirehan_medhat/Cmake_Task/No_Abstraction/Static/build /home/shirehan_medhat/Cmake_Task/No_Abstraction/Static/build /home/shirehan_medhat/Cmake_Task/No_Abstraction/Static/build/CMakeFiles/operation.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/operation.dir/depend
