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
CMAKE_SOURCE_DIR = /home/gabriel/Documents/ENGINE

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gabriel/Documents/ENGINE

# Include any dependencies generated for this target.
include CMakeFiles/engine.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/engine.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/engine.dir/flags.make

CMakeFiles/engine.dir/src/app.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/src/app.cpp.o: src/app.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabriel/Documents/ENGINE/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/engine.dir/src/app.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/src/app.cpp.o -c /home/gabriel/Documents/ENGINE/src/app.cpp

CMakeFiles/engine.dir/src/app.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/src/app.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabriel/Documents/ENGINE/src/app.cpp > CMakeFiles/engine.dir/src/app.cpp.i

CMakeFiles/engine.dir/src/app.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/src/app.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabriel/Documents/ENGINE/src/app.cpp -o CMakeFiles/engine.dir/src/app.cpp.s

CMakeFiles/engine.dir/src/app.cpp.o.requires:

.PHONY : CMakeFiles/engine.dir/src/app.cpp.o.requires

CMakeFiles/engine.dir/src/app.cpp.o.provides: CMakeFiles/engine.dir/src/app.cpp.o.requires
	$(MAKE) -f CMakeFiles/engine.dir/build.make CMakeFiles/engine.dir/src/app.cpp.o.provides.build
.PHONY : CMakeFiles/engine.dir/src/app.cpp.o.provides

CMakeFiles/engine.dir/src/app.cpp.o.provides.build: CMakeFiles/engine.dir/src/app.cpp.o


CMakeFiles/engine.dir/src/camera.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/src/camera.cpp.o: src/camera.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabriel/Documents/ENGINE/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/engine.dir/src/camera.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/src/camera.cpp.o -c /home/gabriel/Documents/ENGINE/src/camera.cpp

CMakeFiles/engine.dir/src/camera.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/src/camera.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabriel/Documents/ENGINE/src/camera.cpp > CMakeFiles/engine.dir/src/camera.cpp.i

CMakeFiles/engine.dir/src/camera.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/src/camera.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabriel/Documents/ENGINE/src/camera.cpp -o CMakeFiles/engine.dir/src/camera.cpp.s

CMakeFiles/engine.dir/src/camera.cpp.o.requires:

.PHONY : CMakeFiles/engine.dir/src/camera.cpp.o.requires

CMakeFiles/engine.dir/src/camera.cpp.o.provides: CMakeFiles/engine.dir/src/camera.cpp.o.requires
	$(MAKE) -f CMakeFiles/engine.dir/build.make CMakeFiles/engine.dir/src/camera.cpp.o.provides.build
.PHONY : CMakeFiles/engine.dir/src/camera.cpp.o.provides

CMakeFiles/engine.dir/src/camera.cpp.o.provides.build: CMakeFiles/engine.dir/src/camera.cpp.o


CMakeFiles/engine.dir/src/game_object.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/src/game_object.cpp.o: src/game_object.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabriel/Documents/ENGINE/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/engine.dir/src/game_object.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/src/game_object.cpp.o -c /home/gabriel/Documents/ENGINE/src/game_object.cpp

CMakeFiles/engine.dir/src/game_object.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/src/game_object.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabriel/Documents/ENGINE/src/game_object.cpp > CMakeFiles/engine.dir/src/game_object.cpp.i

CMakeFiles/engine.dir/src/game_object.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/src/game_object.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabriel/Documents/ENGINE/src/game_object.cpp -o CMakeFiles/engine.dir/src/game_object.cpp.s

CMakeFiles/engine.dir/src/game_object.cpp.o.requires:

.PHONY : CMakeFiles/engine.dir/src/game_object.cpp.o.requires

CMakeFiles/engine.dir/src/game_object.cpp.o.provides: CMakeFiles/engine.dir/src/game_object.cpp.o.requires
	$(MAKE) -f CMakeFiles/engine.dir/build.make CMakeFiles/engine.dir/src/game_object.cpp.o.provides.build
.PHONY : CMakeFiles/engine.dir/src/game_object.cpp.o.provides

CMakeFiles/engine.dir/src/game_object.cpp.o.provides.build: CMakeFiles/engine.dir/src/game_object.cpp.o


CMakeFiles/engine.dir/src/graphics.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/src/graphics.cpp.o: src/graphics.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabriel/Documents/ENGINE/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/engine.dir/src/graphics.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/src/graphics.cpp.o -c /home/gabriel/Documents/ENGINE/src/graphics.cpp

CMakeFiles/engine.dir/src/graphics.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/src/graphics.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabriel/Documents/ENGINE/src/graphics.cpp > CMakeFiles/engine.dir/src/graphics.cpp.i

CMakeFiles/engine.dir/src/graphics.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/src/graphics.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabriel/Documents/ENGINE/src/graphics.cpp -o CMakeFiles/engine.dir/src/graphics.cpp.s

CMakeFiles/engine.dir/src/graphics.cpp.o.requires:

.PHONY : CMakeFiles/engine.dir/src/graphics.cpp.o.requires

CMakeFiles/engine.dir/src/graphics.cpp.o.provides: CMakeFiles/engine.dir/src/graphics.cpp.o.requires
	$(MAKE) -f CMakeFiles/engine.dir/build.make CMakeFiles/engine.dir/src/graphics.cpp.o.provides.build
.PHONY : CMakeFiles/engine.dir/src/graphics.cpp.o.provides

CMakeFiles/engine.dir/src/graphics.cpp.o.provides.build: CMakeFiles/engine.dir/src/graphics.cpp.o


CMakeFiles/engine.dir/src/player.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/src/player.cpp.o: src/player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabriel/Documents/ENGINE/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/engine.dir/src/player.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/src/player.cpp.o -c /home/gabriel/Documents/ENGINE/src/player.cpp

CMakeFiles/engine.dir/src/player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/src/player.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabriel/Documents/ENGINE/src/player.cpp > CMakeFiles/engine.dir/src/player.cpp.i

CMakeFiles/engine.dir/src/player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/src/player.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabriel/Documents/ENGINE/src/player.cpp -o CMakeFiles/engine.dir/src/player.cpp.s

CMakeFiles/engine.dir/src/player.cpp.o.requires:

.PHONY : CMakeFiles/engine.dir/src/player.cpp.o.requires

CMakeFiles/engine.dir/src/player.cpp.o.provides: CMakeFiles/engine.dir/src/player.cpp.o.requires
	$(MAKE) -f CMakeFiles/engine.dir/build.make CMakeFiles/engine.dir/src/player.cpp.o.provides.build
.PHONY : CMakeFiles/engine.dir/src/player.cpp.o.provides

CMakeFiles/engine.dir/src/player.cpp.o.provides.build: CMakeFiles/engine.dir/src/player.cpp.o


CMakeFiles/engine.dir/src/renderer.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/src/renderer.cpp.o: src/renderer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabriel/Documents/ENGINE/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/engine.dir/src/renderer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/src/renderer.cpp.o -c /home/gabriel/Documents/ENGINE/src/renderer.cpp

CMakeFiles/engine.dir/src/renderer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/src/renderer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabriel/Documents/ENGINE/src/renderer.cpp > CMakeFiles/engine.dir/src/renderer.cpp.i

CMakeFiles/engine.dir/src/renderer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/src/renderer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabriel/Documents/ENGINE/src/renderer.cpp -o CMakeFiles/engine.dir/src/renderer.cpp.s

CMakeFiles/engine.dir/src/renderer.cpp.o.requires:

.PHONY : CMakeFiles/engine.dir/src/renderer.cpp.o.requires

CMakeFiles/engine.dir/src/renderer.cpp.o.provides: CMakeFiles/engine.dir/src/renderer.cpp.o.requires
	$(MAKE) -f CMakeFiles/engine.dir/build.make CMakeFiles/engine.dir/src/renderer.cpp.o.provides.build
.PHONY : CMakeFiles/engine.dir/src/renderer.cpp.o.provides

CMakeFiles/engine.dir/src/renderer.cpp.o.provides.build: CMakeFiles/engine.dir/src/renderer.cpp.o


CMakeFiles/engine.dir/src/shader.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/src/shader.cpp.o: src/shader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabriel/Documents/ENGINE/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/engine.dir/src/shader.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/src/shader.cpp.o -c /home/gabriel/Documents/ENGINE/src/shader.cpp

CMakeFiles/engine.dir/src/shader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/src/shader.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabriel/Documents/ENGINE/src/shader.cpp > CMakeFiles/engine.dir/src/shader.cpp.i

CMakeFiles/engine.dir/src/shader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/src/shader.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabriel/Documents/ENGINE/src/shader.cpp -o CMakeFiles/engine.dir/src/shader.cpp.s

CMakeFiles/engine.dir/src/shader.cpp.o.requires:

.PHONY : CMakeFiles/engine.dir/src/shader.cpp.o.requires

CMakeFiles/engine.dir/src/shader.cpp.o.provides: CMakeFiles/engine.dir/src/shader.cpp.o.requires
	$(MAKE) -f CMakeFiles/engine.dir/build.make CMakeFiles/engine.dir/src/shader.cpp.o.provides.build
.PHONY : CMakeFiles/engine.dir/src/shader.cpp.o.provides

CMakeFiles/engine.dir/src/shader.cpp.o.provides.build: CMakeFiles/engine.dir/src/shader.cpp.o


CMakeFiles/engine.dir/src/texture.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/src/texture.cpp.o: src/texture.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabriel/Documents/ENGINE/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/engine.dir/src/texture.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/src/texture.cpp.o -c /home/gabriel/Documents/ENGINE/src/texture.cpp

CMakeFiles/engine.dir/src/texture.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/src/texture.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabriel/Documents/ENGINE/src/texture.cpp > CMakeFiles/engine.dir/src/texture.cpp.i

CMakeFiles/engine.dir/src/texture.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/src/texture.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabriel/Documents/ENGINE/src/texture.cpp -o CMakeFiles/engine.dir/src/texture.cpp.s

CMakeFiles/engine.dir/src/texture.cpp.o.requires:

.PHONY : CMakeFiles/engine.dir/src/texture.cpp.o.requires

CMakeFiles/engine.dir/src/texture.cpp.o.provides: CMakeFiles/engine.dir/src/texture.cpp.o.requires
	$(MAKE) -f CMakeFiles/engine.dir/build.make CMakeFiles/engine.dir/src/texture.cpp.o.provides.build
.PHONY : CMakeFiles/engine.dir/src/texture.cpp.o.provides

CMakeFiles/engine.dir/src/texture.cpp.o.provides.build: CMakeFiles/engine.dir/src/texture.cpp.o


CMakeFiles/engine.dir/src/tile.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/src/tile.cpp.o: src/tile.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabriel/Documents/ENGINE/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/engine.dir/src/tile.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/src/tile.cpp.o -c /home/gabriel/Documents/ENGINE/src/tile.cpp

CMakeFiles/engine.dir/src/tile.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/src/tile.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabriel/Documents/ENGINE/src/tile.cpp > CMakeFiles/engine.dir/src/tile.cpp.i

CMakeFiles/engine.dir/src/tile.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/src/tile.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabriel/Documents/ENGINE/src/tile.cpp -o CMakeFiles/engine.dir/src/tile.cpp.s

CMakeFiles/engine.dir/src/tile.cpp.o.requires:

.PHONY : CMakeFiles/engine.dir/src/tile.cpp.o.requires

CMakeFiles/engine.dir/src/tile.cpp.o.provides: CMakeFiles/engine.dir/src/tile.cpp.o.requires
	$(MAKE) -f CMakeFiles/engine.dir/build.make CMakeFiles/engine.dir/src/tile.cpp.o.provides.build
.PHONY : CMakeFiles/engine.dir/src/tile.cpp.o.provides

CMakeFiles/engine.dir/src/tile.cpp.o.provides.build: CMakeFiles/engine.dir/src/tile.cpp.o


CMakeFiles/engine.dir/src/timer.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/src/timer.cpp.o: src/timer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabriel/Documents/ENGINE/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/engine.dir/src/timer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/src/timer.cpp.o -c /home/gabriel/Documents/ENGINE/src/timer.cpp

CMakeFiles/engine.dir/src/timer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/src/timer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabriel/Documents/ENGINE/src/timer.cpp > CMakeFiles/engine.dir/src/timer.cpp.i

CMakeFiles/engine.dir/src/timer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/src/timer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabriel/Documents/ENGINE/src/timer.cpp -o CMakeFiles/engine.dir/src/timer.cpp.s

CMakeFiles/engine.dir/src/timer.cpp.o.requires:

.PHONY : CMakeFiles/engine.dir/src/timer.cpp.o.requires

CMakeFiles/engine.dir/src/timer.cpp.o.provides: CMakeFiles/engine.dir/src/timer.cpp.o.requires
	$(MAKE) -f CMakeFiles/engine.dir/build.make CMakeFiles/engine.dir/src/timer.cpp.o.provides.build
.PHONY : CMakeFiles/engine.dir/src/timer.cpp.o.provides

CMakeFiles/engine.dir/src/timer.cpp.o.provides.build: CMakeFiles/engine.dir/src/timer.cpp.o


# Object files for target engine
engine_OBJECTS = \
"CMakeFiles/engine.dir/src/app.cpp.o" \
"CMakeFiles/engine.dir/src/camera.cpp.o" \
"CMakeFiles/engine.dir/src/game_object.cpp.o" \
"CMakeFiles/engine.dir/src/graphics.cpp.o" \
"CMakeFiles/engine.dir/src/player.cpp.o" \
"CMakeFiles/engine.dir/src/renderer.cpp.o" \
"CMakeFiles/engine.dir/src/shader.cpp.o" \
"CMakeFiles/engine.dir/src/texture.cpp.o" \
"CMakeFiles/engine.dir/src/tile.cpp.o" \
"CMakeFiles/engine.dir/src/timer.cpp.o"

# External object files for target engine
engine_EXTERNAL_OBJECTS =

engine: CMakeFiles/engine.dir/src/app.cpp.o
engine: CMakeFiles/engine.dir/src/camera.cpp.o
engine: CMakeFiles/engine.dir/src/game_object.cpp.o
engine: CMakeFiles/engine.dir/src/graphics.cpp.o
engine: CMakeFiles/engine.dir/src/player.cpp.o
engine: CMakeFiles/engine.dir/src/renderer.cpp.o
engine: CMakeFiles/engine.dir/src/shader.cpp.o
engine: CMakeFiles/engine.dir/src/texture.cpp.o
engine: CMakeFiles/engine.dir/src/tile.cpp.o
engine: CMakeFiles/engine.dir/src/timer.cpp.o
engine: CMakeFiles/engine.dir/build.make
engine: /usr/local/lib/libSDL2main.a
engine: /usr/local/lib/libSDL2.so
engine: /usr/lib64/libGLEW.so
engine: /usr/lib/x86_64-linux-gnu/libGL.so
engine: /usr/lib/x86_64-linux-gnu/libGLU.so
engine: CMakeFiles/engine.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gabriel/Documents/ENGINE/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX executable engine"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/engine.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/engine.dir/build: engine

.PHONY : CMakeFiles/engine.dir/build

CMakeFiles/engine.dir/requires: CMakeFiles/engine.dir/src/app.cpp.o.requires
CMakeFiles/engine.dir/requires: CMakeFiles/engine.dir/src/camera.cpp.o.requires
CMakeFiles/engine.dir/requires: CMakeFiles/engine.dir/src/game_object.cpp.o.requires
CMakeFiles/engine.dir/requires: CMakeFiles/engine.dir/src/graphics.cpp.o.requires
CMakeFiles/engine.dir/requires: CMakeFiles/engine.dir/src/player.cpp.o.requires
CMakeFiles/engine.dir/requires: CMakeFiles/engine.dir/src/renderer.cpp.o.requires
CMakeFiles/engine.dir/requires: CMakeFiles/engine.dir/src/shader.cpp.o.requires
CMakeFiles/engine.dir/requires: CMakeFiles/engine.dir/src/texture.cpp.o.requires
CMakeFiles/engine.dir/requires: CMakeFiles/engine.dir/src/tile.cpp.o.requires
CMakeFiles/engine.dir/requires: CMakeFiles/engine.dir/src/timer.cpp.o.requires

.PHONY : CMakeFiles/engine.dir/requires

CMakeFiles/engine.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/engine.dir/cmake_clean.cmake
.PHONY : CMakeFiles/engine.dir/clean

CMakeFiles/engine.dir/depend:
	cd /home/gabriel/Documents/ENGINE && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gabriel/Documents/ENGINE /home/gabriel/Documents/ENGINE /home/gabriel/Documents/ENGINE /home/gabriel/Documents/ENGINE /home/gabriel/Documents/ENGINE/CMakeFiles/engine.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/engine.dir/depend

