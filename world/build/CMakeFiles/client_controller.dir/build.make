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
include CMakeFiles/client_controller.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/client_controller.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/client_controller.dir/flags.make

CMakeFiles/client_controller.dir/client.cpp.o: CMakeFiles/client_controller.dir/flags.make
CMakeFiles/client_controller.dir/client.cpp.o: ../../client.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zamzami/planning_assignment/world/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/client_controller.dir/client.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/client_controller.dir/client.cpp.o -c /home/zamzami/planning_assignment/client.cpp

CMakeFiles/client_controller.dir/client.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/client_controller.dir/client.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zamzami/planning_assignment/client.cpp > CMakeFiles/client_controller.dir/client.cpp.i

CMakeFiles/client_controller.dir/client.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/client_controller.dir/client.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zamzami/planning_assignment/client.cpp -o CMakeFiles/client_controller.dir/client.cpp.s

CMakeFiles/client_controller.dir/client.cpp.o.requires:

.PHONY : CMakeFiles/client_controller.dir/client.cpp.o.requires

CMakeFiles/client_controller.dir/client.cpp.o.provides: CMakeFiles/client_controller.dir/client.cpp.o.requires
	$(MAKE) -f CMakeFiles/client_controller.dir/build.make CMakeFiles/client_controller.dir/client.cpp.o.provides.build
.PHONY : CMakeFiles/client_controller.dir/client.cpp.o.provides

CMakeFiles/client_controller.dir/client.cpp.o.provides.build: CMakeFiles/client_controller.dir/client.cpp.o


# Object files for target client_controller
client_controller_OBJECTS = \
"CMakeFiles/client_controller.dir/client.cpp.o"

# External object files for target client_controller
client_controller_EXTERNAL_OBJECTS =

client_controller: CMakeFiles/client_controller.dir/client.cpp.o
client_controller: CMakeFiles/client_controller.dir/build.make
client_controller: msgs/libworld_state_msgs.so
client_controller: /usr/lib/x86_64-linux-gnu/libSimTKsimbody.so
client_controller: /usr/lib/x86_64-linux-gnu/libSimTKmath.so
client_controller: /usr/lib/x86_64-linux-gnu/libSimTKcommon.so
client_controller: /usr/lib/x86_64-linux-gnu/libblas.so
client_controller: /usr/lib/x86_64-linux-gnu/liblapack.so
client_controller: /usr/lib/x86_64-linux-gnu/libblas.so
client_controller: /usr/lib/x86_64-linux-gnu/libgazebo.so
client_controller: /usr/lib/x86_64-linux-gnu/libgazebo_client.so
client_controller: /usr/lib/x86_64-linux-gnu/libgazebo_gui.so
client_controller: /usr/lib/x86_64-linux-gnu/libgazebo_sensors.so
client_controller: /usr/lib/x86_64-linux-gnu/libgazebo_rendering.so
client_controller: /usr/lib/x86_64-linux-gnu/libgazebo_physics.so
client_controller: /usr/lib/x86_64-linux-gnu/libgazebo_ode.so
client_controller: /usr/lib/x86_64-linux-gnu/libgazebo_transport.so
client_controller: /usr/lib/x86_64-linux-gnu/libgazebo_msgs.so
client_controller: /usr/lib/x86_64-linux-gnu/libgazebo_util.so
client_controller: /usr/lib/x86_64-linux-gnu/libgazebo_common.so
client_controller: /usr/lib/x86_64-linux-gnu/libgazebo_gimpact.so
client_controller: /usr/lib/x86_64-linux-gnu/libgazebo_opcode.so
client_controller: /usr/lib/x86_64-linux-gnu/libgazebo_opende_ou.so
client_controller: /usr/lib/x86_64-linux-gnu/libgazebo_ccd.so
client_controller: /usr/lib/x86_64-linux-gnu/libboost_thread.so
client_controller: /usr/lib/x86_64-linux-gnu/libboost_signals.so
client_controller: /usr/lib/x86_64-linux-gnu/libboost_system.so
client_controller: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
client_controller: /usr/lib/x86_64-linux-gnu/libboost_program_options.so
client_controller: /usr/lib/x86_64-linux-gnu/libboost_regex.so
client_controller: /usr/lib/x86_64-linux-gnu/libboost_iostreams.so
client_controller: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
client_controller: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
client_controller: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
client_controller: /usr/lib/x86_64-linux-gnu/libpthread.so
client_controller: /usr/lib/x86_64-linux-gnu/libprotobuf.so
client_controller: /usr/lib/x86_64-linux-gnu/libsdformat.so
client_controller: /usr/lib/x86_64-linux-gnu/libOgreMain.so
client_controller: /usr/lib/x86_64-linux-gnu/libboost_thread.so
client_controller: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
client_controller: /usr/lib/x86_64-linux-gnu/libboost_system.so
client_controller: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
client_controller: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
client_controller: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
client_controller: /usr/lib/x86_64-linux-gnu/libpthread.so
client_controller: /usr/lib/x86_64-linux-gnu/libOgreTerrain.so
client_controller: /usr/lib/x86_64-linux-gnu/libOgrePaging.so
client_controller: /usr/lib/x86_64-linux-gnu/libignition-transport4.so.4.0.0
client_controller: /usr/lib/x86_64-linux-gnu/libignition-msgs1.so.1.0.0
client_controller: /usr/lib/x86_64-linux-gnu/libignition-common1.so.1.1.1
client_controller: /usr/lib/x86_64-linux-gnu/libignition-fuel_tools1.so.1.2.0
client_controller: /usr/lib/x86_64-linux-gnu/liblapack.so
client_controller: /usr/lib/x86_64-linux-gnu/libgazebo.so
client_controller: /usr/lib/x86_64-linux-gnu/libgazebo_client.so
client_controller: /usr/lib/x86_64-linux-gnu/libgazebo_gui.so
client_controller: /usr/lib/x86_64-linux-gnu/libgazebo_sensors.so
client_controller: /usr/lib/x86_64-linux-gnu/libgazebo_rendering.so
client_controller: /usr/lib/x86_64-linux-gnu/libgazebo_physics.so
client_controller: /usr/lib/x86_64-linux-gnu/libgazebo_ode.so
client_controller: /usr/lib/x86_64-linux-gnu/libgazebo_transport.so
client_controller: /usr/lib/x86_64-linux-gnu/libgazebo_msgs.so
client_controller: /usr/lib/x86_64-linux-gnu/libgazebo_util.so
client_controller: /usr/lib/x86_64-linux-gnu/libgazebo_common.so
client_controller: /usr/lib/x86_64-linux-gnu/libgazebo_gimpact.so
client_controller: /usr/lib/x86_64-linux-gnu/libgazebo_opcode.so
client_controller: /usr/lib/x86_64-linux-gnu/libgazebo_opende_ou.so
client_controller: /usr/lib/x86_64-linux-gnu/libgazebo_ccd.so
client_controller: /usr/lib/x86_64-linux-gnu/libboost_thread.so
client_controller: /usr/lib/x86_64-linux-gnu/libboost_signals.so
client_controller: /usr/lib/x86_64-linux-gnu/libboost_system.so
client_controller: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
client_controller: /usr/lib/x86_64-linux-gnu/libboost_program_options.so
client_controller: /usr/lib/x86_64-linux-gnu/libboost_regex.so
client_controller: /usr/lib/x86_64-linux-gnu/libboost_iostreams.so
client_controller: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
client_controller: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
client_controller: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
client_controller: /usr/lib/x86_64-linux-gnu/libpthread.so
client_controller: /usr/lib/x86_64-linux-gnu/libsdformat.so
client_controller: /usr/lib/x86_64-linux-gnu/libOgreMain.so
client_controller: /usr/lib/x86_64-linux-gnu/libboost_thread.so
client_controller: /usr/lib/x86_64-linux-gnu/libboost_signals.so
client_controller: /usr/lib/x86_64-linux-gnu/libboost_system.so
client_controller: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
client_controller: /usr/lib/x86_64-linux-gnu/libboost_program_options.so
client_controller: /usr/lib/x86_64-linux-gnu/libboost_regex.so
client_controller: /usr/lib/x86_64-linux-gnu/libboost_iostreams.so
client_controller: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
client_controller: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
client_controller: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
client_controller: /usr/lib/x86_64-linux-gnu/libpthread.so
client_controller: /usr/lib/x86_64-linux-gnu/libsdformat.so
client_controller: /usr/lib/x86_64-linux-gnu/libOgreMain.so
client_controller: /usr/lib/x86_64-linux-gnu/libprotobuf.so
client_controller: /usr/lib/x86_64-linux-gnu/libOgreTerrain.so
client_controller: /usr/lib/x86_64-linux-gnu/libOgrePaging.so
client_controller: /usr/lib/x86_64-linux-gnu/libprotobuf.so
client_controller: /usr/lib/x86_64-linux-gnu/libignition-math4.so.4.0.0
client_controller: /usr/lib/x86_64-linux-gnu/libuuid.so
client_controller: /usr/lib/x86_64-linux-gnu/libuuid.so
client_controller: /usr/lib/x86_64-linux-gnu/libswscale.so
client_controller: /usr/lib/x86_64-linux-gnu/libswscale.so
client_controller: /usr/lib/x86_64-linux-gnu/libavdevice.so
client_controller: /usr/lib/x86_64-linux-gnu/libavdevice.so
client_controller: /usr/lib/x86_64-linux-gnu/libavformat.so
client_controller: /usr/lib/x86_64-linux-gnu/libavformat.so
client_controller: /usr/lib/x86_64-linux-gnu/libavcodec.so
client_controller: /usr/lib/x86_64-linux-gnu/libavcodec.so
client_controller: /usr/lib/x86_64-linux-gnu/libavutil.so
client_controller: /usr/lib/x86_64-linux-gnu/libavutil.so
client_controller: CMakeFiles/client_controller.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/zamzami/planning_assignment/world/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable client_controller"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/client_controller.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/client_controller.dir/build: client_controller

.PHONY : CMakeFiles/client_controller.dir/build

CMakeFiles/client_controller.dir/requires: CMakeFiles/client_controller.dir/client.cpp.o.requires

.PHONY : CMakeFiles/client_controller.dir/requires

CMakeFiles/client_controller.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/client_controller.dir/cmake_clean.cmake
.PHONY : CMakeFiles/client_controller.dir/clean

CMakeFiles/client_controller.dir/depend:
	cd /home/zamzami/planning_assignment/world/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zamzami/planning_assignment /home/zamzami/planning_assignment /home/zamzami/planning_assignment/world/build /home/zamzami/planning_assignment/world/build /home/zamzami/planning_assignment/world/build/CMakeFiles/client_controller.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/client_controller.dir/depend

