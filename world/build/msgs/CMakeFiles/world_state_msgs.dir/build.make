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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/zamzami/planning_assignment

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/zamzami/planning_assignment/world/build

# Include any dependencies generated for this target.
include msgs/CMakeFiles/world_state_msgs.dir/depend.make

# Include the progress variables for this target.
include msgs/CMakeFiles/world_state_msgs.dir/progress.make

# Include the compile flags for this target's objects.
include msgs/CMakeFiles/world_state_msgs.dir/flags.make

msgs/custom_messages.pb.cc: ../../msgs/custom_messages.proto
msgs/custom_messages.pb.cc: /usr/bin/protoc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/zamzami/planning_assignment/world/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Running C++ protocol buffer compiler on custom_messages.proto"
	cd /home/zamzami/planning_assignment/world/build/msgs && /usr/bin/protoc --cpp_out=/home/zamzami/planning_assignment/world/build/msgs -I /home/zamzami/planning_assignment/msgs -I /usr/include/gazebo-9/gazebo/msgs/proto /home/zamzami/planning_assignment/msgs/custom_messages.proto

msgs/custom_messages.pb.h: msgs/custom_messages.pb.cc
	@$(CMAKE_COMMAND) -E touch_nocreate msgs/custom_messages.pb.h

msgs/vector2d.pb.cc: /usr/include/gazebo-9/gazebo/msgs/proto/vector2d.proto
msgs/vector2d.pb.cc: /usr/bin/protoc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/zamzami/planning_assignment/world/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Running C++ protocol buffer compiler on /usr/include/gazebo-9/gazebo/msgs/proto/vector2d.proto"
	cd /home/zamzami/planning_assignment/world/build/msgs && /usr/bin/protoc --cpp_out=/home/zamzami/planning_assignment/world/build/msgs -I /home/zamzami/planning_assignment/msgs -I /usr/include/gazebo-9/gazebo/msgs/proto /usr/include/gazebo-9/gazebo/msgs/proto/vector2d.proto

msgs/vector2d.pb.h: msgs/vector2d.pb.cc
	@$(CMAKE_COMMAND) -E touch_nocreate msgs/vector2d.pb.h

msgs/header.pb.cc: /usr/include/gazebo-9/gazebo/msgs/proto/header.proto
msgs/header.pb.cc: /usr/bin/protoc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/zamzami/planning_assignment/world/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Running C++ protocol buffer compiler on /usr/include/gazebo-9/gazebo/msgs/proto/header.proto"
	cd /home/zamzami/planning_assignment/world/build/msgs && /usr/bin/protoc --cpp_out=/home/zamzami/planning_assignment/world/build/msgs -I /home/zamzami/planning_assignment/msgs -I /usr/include/gazebo-9/gazebo/msgs/proto /usr/include/gazebo-9/gazebo/msgs/proto/header.proto

msgs/header.pb.h: msgs/header.pb.cc
	@$(CMAKE_COMMAND) -E touch_nocreate msgs/header.pb.h

msgs/time.pb.cc: /usr/include/gazebo-9/gazebo/msgs/proto/time.proto
msgs/time.pb.cc: /usr/bin/protoc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/zamzami/planning_assignment/world/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Running C++ protocol buffer compiler on /usr/include/gazebo-9/gazebo/msgs/proto/time.proto"
	cd /home/zamzami/planning_assignment/world/build/msgs && /usr/bin/protoc --cpp_out=/home/zamzami/planning_assignment/world/build/msgs -I /home/zamzami/planning_assignment/msgs -I /usr/include/gazebo-9/gazebo/msgs/proto /usr/include/gazebo-9/gazebo/msgs/proto/time.proto

msgs/time.pb.h: msgs/time.pb.cc
	@$(CMAKE_COMMAND) -E touch_nocreate msgs/time.pb.h

msgs/CMakeFiles/world_state_msgs.dir/custom_messages.pb.cc.o: msgs/CMakeFiles/world_state_msgs.dir/flags.make
msgs/CMakeFiles/world_state_msgs.dir/custom_messages.pb.cc.o: msgs/custom_messages.pb.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zamzami/planning_assignment/world/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object msgs/CMakeFiles/world_state_msgs.dir/custom_messages.pb.cc.o"
	cd /home/zamzami/planning_assignment/world/build/msgs && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/world_state_msgs.dir/custom_messages.pb.cc.o -c /home/zamzami/planning_assignment/world/build/msgs/custom_messages.pb.cc

msgs/CMakeFiles/world_state_msgs.dir/custom_messages.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/world_state_msgs.dir/custom_messages.pb.cc.i"
	cd /home/zamzami/planning_assignment/world/build/msgs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zamzami/planning_assignment/world/build/msgs/custom_messages.pb.cc > CMakeFiles/world_state_msgs.dir/custom_messages.pb.cc.i

msgs/CMakeFiles/world_state_msgs.dir/custom_messages.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/world_state_msgs.dir/custom_messages.pb.cc.s"
	cd /home/zamzami/planning_assignment/world/build/msgs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zamzami/planning_assignment/world/build/msgs/custom_messages.pb.cc -o CMakeFiles/world_state_msgs.dir/custom_messages.pb.cc.s

msgs/CMakeFiles/world_state_msgs.dir/custom_messages.pb.cc.o.requires:

.PHONY : msgs/CMakeFiles/world_state_msgs.dir/custom_messages.pb.cc.o.requires

msgs/CMakeFiles/world_state_msgs.dir/custom_messages.pb.cc.o.provides: msgs/CMakeFiles/world_state_msgs.dir/custom_messages.pb.cc.o.requires
	$(MAKE) -f msgs/CMakeFiles/world_state_msgs.dir/build.make msgs/CMakeFiles/world_state_msgs.dir/custom_messages.pb.cc.o.provides.build
.PHONY : msgs/CMakeFiles/world_state_msgs.dir/custom_messages.pb.cc.o.provides

msgs/CMakeFiles/world_state_msgs.dir/custom_messages.pb.cc.o.provides.build: msgs/CMakeFiles/world_state_msgs.dir/custom_messages.pb.cc.o


msgs/CMakeFiles/world_state_msgs.dir/vector2d.pb.cc.o: msgs/CMakeFiles/world_state_msgs.dir/flags.make
msgs/CMakeFiles/world_state_msgs.dir/vector2d.pb.cc.o: msgs/vector2d.pb.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zamzami/planning_assignment/world/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object msgs/CMakeFiles/world_state_msgs.dir/vector2d.pb.cc.o"
	cd /home/zamzami/planning_assignment/world/build/msgs && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/world_state_msgs.dir/vector2d.pb.cc.o -c /home/zamzami/planning_assignment/world/build/msgs/vector2d.pb.cc

msgs/CMakeFiles/world_state_msgs.dir/vector2d.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/world_state_msgs.dir/vector2d.pb.cc.i"
	cd /home/zamzami/planning_assignment/world/build/msgs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zamzami/planning_assignment/world/build/msgs/vector2d.pb.cc > CMakeFiles/world_state_msgs.dir/vector2d.pb.cc.i

msgs/CMakeFiles/world_state_msgs.dir/vector2d.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/world_state_msgs.dir/vector2d.pb.cc.s"
	cd /home/zamzami/planning_assignment/world/build/msgs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zamzami/planning_assignment/world/build/msgs/vector2d.pb.cc -o CMakeFiles/world_state_msgs.dir/vector2d.pb.cc.s

msgs/CMakeFiles/world_state_msgs.dir/vector2d.pb.cc.o.requires:

.PHONY : msgs/CMakeFiles/world_state_msgs.dir/vector2d.pb.cc.o.requires

msgs/CMakeFiles/world_state_msgs.dir/vector2d.pb.cc.o.provides: msgs/CMakeFiles/world_state_msgs.dir/vector2d.pb.cc.o.requires
	$(MAKE) -f msgs/CMakeFiles/world_state_msgs.dir/build.make msgs/CMakeFiles/world_state_msgs.dir/vector2d.pb.cc.o.provides.build
.PHONY : msgs/CMakeFiles/world_state_msgs.dir/vector2d.pb.cc.o.provides

msgs/CMakeFiles/world_state_msgs.dir/vector2d.pb.cc.o.provides.build: msgs/CMakeFiles/world_state_msgs.dir/vector2d.pb.cc.o


msgs/CMakeFiles/world_state_msgs.dir/header.pb.cc.o: msgs/CMakeFiles/world_state_msgs.dir/flags.make
msgs/CMakeFiles/world_state_msgs.dir/header.pb.cc.o: msgs/header.pb.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zamzami/planning_assignment/world/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object msgs/CMakeFiles/world_state_msgs.dir/header.pb.cc.o"
	cd /home/zamzami/planning_assignment/world/build/msgs && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/world_state_msgs.dir/header.pb.cc.o -c /home/zamzami/planning_assignment/world/build/msgs/header.pb.cc

msgs/CMakeFiles/world_state_msgs.dir/header.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/world_state_msgs.dir/header.pb.cc.i"
	cd /home/zamzami/planning_assignment/world/build/msgs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zamzami/planning_assignment/world/build/msgs/header.pb.cc > CMakeFiles/world_state_msgs.dir/header.pb.cc.i

msgs/CMakeFiles/world_state_msgs.dir/header.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/world_state_msgs.dir/header.pb.cc.s"
	cd /home/zamzami/planning_assignment/world/build/msgs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zamzami/planning_assignment/world/build/msgs/header.pb.cc -o CMakeFiles/world_state_msgs.dir/header.pb.cc.s

msgs/CMakeFiles/world_state_msgs.dir/header.pb.cc.o.requires:

.PHONY : msgs/CMakeFiles/world_state_msgs.dir/header.pb.cc.o.requires

msgs/CMakeFiles/world_state_msgs.dir/header.pb.cc.o.provides: msgs/CMakeFiles/world_state_msgs.dir/header.pb.cc.o.requires
	$(MAKE) -f msgs/CMakeFiles/world_state_msgs.dir/build.make msgs/CMakeFiles/world_state_msgs.dir/header.pb.cc.o.provides.build
.PHONY : msgs/CMakeFiles/world_state_msgs.dir/header.pb.cc.o.provides

msgs/CMakeFiles/world_state_msgs.dir/header.pb.cc.o.provides.build: msgs/CMakeFiles/world_state_msgs.dir/header.pb.cc.o


msgs/CMakeFiles/world_state_msgs.dir/time.pb.cc.o: msgs/CMakeFiles/world_state_msgs.dir/flags.make
msgs/CMakeFiles/world_state_msgs.dir/time.pb.cc.o: msgs/time.pb.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zamzami/planning_assignment/world/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object msgs/CMakeFiles/world_state_msgs.dir/time.pb.cc.o"
	cd /home/zamzami/planning_assignment/world/build/msgs && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/world_state_msgs.dir/time.pb.cc.o -c /home/zamzami/planning_assignment/world/build/msgs/time.pb.cc

msgs/CMakeFiles/world_state_msgs.dir/time.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/world_state_msgs.dir/time.pb.cc.i"
	cd /home/zamzami/planning_assignment/world/build/msgs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zamzami/planning_assignment/world/build/msgs/time.pb.cc > CMakeFiles/world_state_msgs.dir/time.pb.cc.i

msgs/CMakeFiles/world_state_msgs.dir/time.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/world_state_msgs.dir/time.pb.cc.s"
	cd /home/zamzami/planning_assignment/world/build/msgs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zamzami/planning_assignment/world/build/msgs/time.pb.cc -o CMakeFiles/world_state_msgs.dir/time.pb.cc.s

msgs/CMakeFiles/world_state_msgs.dir/time.pb.cc.o.requires:

.PHONY : msgs/CMakeFiles/world_state_msgs.dir/time.pb.cc.o.requires

msgs/CMakeFiles/world_state_msgs.dir/time.pb.cc.o.provides: msgs/CMakeFiles/world_state_msgs.dir/time.pb.cc.o.requires
	$(MAKE) -f msgs/CMakeFiles/world_state_msgs.dir/build.make msgs/CMakeFiles/world_state_msgs.dir/time.pb.cc.o.provides.build
.PHONY : msgs/CMakeFiles/world_state_msgs.dir/time.pb.cc.o.provides

msgs/CMakeFiles/world_state_msgs.dir/time.pb.cc.o.provides.build: msgs/CMakeFiles/world_state_msgs.dir/time.pb.cc.o


# Object files for target world_state_msgs
world_state_msgs_OBJECTS = \
"CMakeFiles/world_state_msgs.dir/custom_messages.pb.cc.o" \
"CMakeFiles/world_state_msgs.dir/vector2d.pb.cc.o" \
"CMakeFiles/world_state_msgs.dir/header.pb.cc.o" \
"CMakeFiles/world_state_msgs.dir/time.pb.cc.o"

# External object files for target world_state_msgs
world_state_msgs_EXTERNAL_OBJECTS =

msgs/libworld_state_msgs.so: msgs/CMakeFiles/world_state_msgs.dir/custom_messages.pb.cc.o
msgs/libworld_state_msgs.so: msgs/CMakeFiles/world_state_msgs.dir/vector2d.pb.cc.o
msgs/libworld_state_msgs.so: msgs/CMakeFiles/world_state_msgs.dir/header.pb.cc.o
msgs/libworld_state_msgs.so: msgs/CMakeFiles/world_state_msgs.dir/time.pb.cc.o
msgs/libworld_state_msgs.so: msgs/CMakeFiles/world_state_msgs.dir/build.make
msgs/libworld_state_msgs.so: /usr/lib/x86_64-linux-gnu/libprotobuf.so
msgs/libworld_state_msgs.so: msgs/CMakeFiles/world_state_msgs.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/zamzami/planning_assignment/world/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX shared library libworld_state_msgs.so"
	cd /home/zamzami/planning_assignment/world/build/msgs && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/world_state_msgs.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
msgs/CMakeFiles/world_state_msgs.dir/build: msgs/libworld_state_msgs.so

.PHONY : msgs/CMakeFiles/world_state_msgs.dir/build

msgs/CMakeFiles/world_state_msgs.dir/requires: msgs/CMakeFiles/world_state_msgs.dir/custom_messages.pb.cc.o.requires
msgs/CMakeFiles/world_state_msgs.dir/requires: msgs/CMakeFiles/world_state_msgs.dir/vector2d.pb.cc.o.requires
msgs/CMakeFiles/world_state_msgs.dir/requires: msgs/CMakeFiles/world_state_msgs.dir/header.pb.cc.o.requires
msgs/CMakeFiles/world_state_msgs.dir/requires: msgs/CMakeFiles/world_state_msgs.dir/time.pb.cc.o.requires

.PHONY : msgs/CMakeFiles/world_state_msgs.dir/requires

msgs/CMakeFiles/world_state_msgs.dir/clean:
	cd /home/zamzami/planning_assignment/world/build/msgs && $(CMAKE_COMMAND) -P CMakeFiles/world_state_msgs.dir/cmake_clean.cmake
.PHONY : msgs/CMakeFiles/world_state_msgs.dir/clean

msgs/CMakeFiles/world_state_msgs.dir/depend: msgs/custom_messages.pb.cc
msgs/CMakeFiles/world_state_msgs.dir/depend: msgs/custom_messages.pb.h
msgs/CMakeFiles/world_state_msgs.dir/depend: msgs/vector2d.pb.cc
msgs/CMakeFiles/world_state_msgs.dir/depend: msgs/vector2d.pb.h
msgs/CMakeFiles/world_state_msgs.dir/depend: msgs/header.pb.cc
msgs/CMakeFiles/world_state_msgs.dir/depend: msgs/header.pb.h
msgs/CMakeFiles/world_state_msgs.dir/depend: msgs/time.pb.cc
msgs/CMakeFiles/world_state_msgs.dir/depend: msgs/time.pb.h
	cd /home/zamzami/planning_assignment/world/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zamzami/planning_assignment /home/zamzami/planning_assignment/msgs /home/zamzami/planning_assignment/world/build /home/zamzami/planning_assignment/world/build/msgs /home/zamzami/planning_assignment/world/build/msgs/CMakeFiles/world_state_msgs.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : msgs/CMakeFiles/world_state_msgs.dir/depend

