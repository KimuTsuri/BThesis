# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /home/ktsuri/MyGeant4/B4/B4a

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ktsuri/MyGeant4/B4/B4a_work

# Include any dependencies generated for this target.
include CMakeFiles/exampleB4a.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/exampleB4a.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/exampleB4a.dir/flags.make

CMakeFiles/exampleB4a.dir/exampleB4a.cc.o: CMakeFiles/exampleB4a.dir/flags.make
CMakeFiles/exampleB4a.dir/exampleB4a.cc.o: /home/ktsuri/MyGeant4/B4/B4a/exampleB4a.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ktsuri/MyGeant4/B4/B4a_work/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/exampleB4a.dir/exampleB4a.cc.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/exampleB4a.dir/exampleB4a.cc.o -c /home/ktsuri/MyGeant4/B4/B4a/exampleB4a.cc

CMakeFiles/exampleB4a.dir/exampleB4a.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exampleB4a.dir/exampleB4a.cc.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ktsuri/MyGeant4/B4/B4a/exampleB4a.cc > CMakeFiles/exampleB4a.dir/exampleB4a.cc.i

CMakeFiles/exampleB4a.dir/exampleB4a.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exampleB4a.dir/exampleB4a.cc.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ktsuri/MyGeant4/B4/B4a/exampleB4a.cc -o CMakeFiles/exampleB4a.dir/exampleB4a.cc.s

CMakeFiles/exampleB4a.dir/exampleB4a.cc.o.requires:

.PHONY : CMakeFiles/exampleB4a.dir/exampleB4a.cc.o.requires

CMakeFiles/exampleB4a.dir/exampleB4a.cc.o.provides: CMakeFiles/exampleB4a.dir/exampleB4a.cc.o.requires
	$(MAKE) -f CMakeFiles/exampleB4a.dir/build.make CMakeFiles/exampleB4a.dir/exampleB4a.cc.o.provides.build
.PHONY : CMakeFiles/exampleB4a.dir/exampleB4a.cc.o.provides

CMakeFiles/exampleB4a.dir/exampleB4a.cc.o.provides.build: CMakeFiles/exampleB4a.dir/exampleB4a.cc.o


CMakeFiles/exampleB4a.dir/src/B4aSteppingAction.cc.o: CMakeFiles/exampleB4a.dir/flags.make
CMakeFiles/exampleB4a.dir/src/B4aSteppingAction.cc.o: /home/ktsuri/MyGeant4/B4/B4a/src/B4aSteppingAction.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ktsuri/MyGeant4/B4/B4a_work/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/exampleB4a.dir/src/B4aSteppingAction.cc.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/exampleB4a.dir/src/B4aSteppingAction.cc.o -c /home/ktsuri/MyGeant4/B4/B4a/src/B4aSteppingAction.cc

CMakeFiles/exampleB4a.dir/src/B4aSteppingAction.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exampleB4a.dir/src/B4aSteppingAction.cc.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ktsuri/MyGeant4/B4/B4a/src/B4aSteppingAction.cc > CMakeFiles/exampleB4a.dir/src/B4aSteppingAction.cc.i

CMakeFiles/exampleB4a.dir/src/B4aSteppingAction.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exampleB4a.dir/src/B4aSteppingAction.cc.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ktsuri/MyGeant4/B4/B4a/src/B4aSteppingAction.cc -o CMakeFiles/exampleB4a.dir/src/B4aSteppingAction.cc.s

CMakeFiles/exampleB4a.dir/src/B4aSteppingAction.cc.o.requires:

.PHONY : CMakeFiles/exampleB4a.dir/src/B4aSteppingAction.cc.o.requires

CMakeFiles/exampleB4a.dir/src/B4aSteppingAction.cc.o.provides: CMakeFiles/exampleB4a.dir/src/B4aSteppingAction.cc.o.requires
	$(MAKE) -f CMakeFiles/exampleB4a.dir/build.make CMakeFiles/exampleB4a.dir/src/B4aSteppingAction.cc.o.provides.build
.PHONY : CMakeFiles/exampleB4a.dir/src/B4aSteppingAction.cc.o.provides

CMakeFiles/exampleB4a.dir/src/B4aSteppingAction.cc.o.provides.build: CMakeFiles/exampleB4a.dir/src/B4aSteppingAction.cc.o


CMakeFiles/exampleB4a.dir/src/B4RunAction.cc.o: CMakeFiles/exampleB4a.dir/flags.make
CMakeFiles/exampleB4a.dir/src/B4RunAction.cc.o: /home/ktsuri/MyGeant4/B4/B4a/src/B4RunAction.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ktsuri/MyGeant4/B4/B4a_work/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/exampleB4a.dir/src/B4RunAction.cc.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/exampleB4a.dir/src/B4RunAction.cc.o -c /home/ktsuri/MyGeant4/B4/B4a/src/B4RunAction.cc

CMakeFiles/exampleB4a.dir/src/B4RunAction.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exampleB4a.dir/src/B4RunAction.cc.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ktsuri/MyGeant4/B4/B4a/src/B4RunAction.cc > CMakeFiles/exampleB4a.dir/src/B4RunAction.cc.i

CMakeFiles/exampleB4a.dir/src/B4RunAction.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exampleB4a.dir/src/B4RunAction.cc.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ktsuri/MyGeant4/B4/B4a/src/B4RunAction.cc -o CMakeFiles/exampleB4a.dir/src/B4RunAction.cc.s

CMakeFiles/exampleB4a.dir/src/B4RunAction.cc.o.requires:

.PHONY : CMakeFiles/exampleB4a.dir/src/B4RunAction.cc.o.requires

CMakeFiles/exampleB4a.dir/src/B4RunAction.cc.o.provides: CMakeFiles/exampleB4a.dir/src/B4RunAction.cc.o.requires
	$(MAKE) -f CMakeFiles/exampleB4a.dir/build.make CMakeFiles/exampleB4a.dir/src/B4RunAction.cc.o.provides.build
.PHONY : CMakeFiles/exampleB4a.dir/src/B4RunAction.cc.o.provides

CMakeFiles/exampleB4a.dir/src/B4RunAction.cc.o.provides.build: CMakeFiles/exampleB4a.dir/src/B4RunAction.cc.o


CMakeFiles/exampleB4a.dir/src/B4DetectorConstruction.cc.o: CMakeFiles/exampleB4a.dir/flags.make
CMakeFiles/exampleB4a.dir/src/B4DetectorConstruction.cc.o: /home/ktsuri/MyGeant4/B4/B4a/src/B4DetectorConstruction.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ktsuri/MyGeant4/B4/B4a_work/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/exampleB4a.dir/src/B4DetectorConstruction.cc.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/exampleB4a.dir/src/B4DetectorConstruction.cc.o -c /home/ktsuri/MyGeant4/B4/B4a/src/B4DetectorConstruction.cc

CMakeFiles/exampleB4a.dir/src/B4DetectorConstruction.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exampleB4a.dir/src/B4DetectorConstruction.cc.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ktsuri/MyGeant4/B4/B4a/src/B4DetectorConstruction.cc > CMakeFiles/exampleB4a.dir/src/B4DetectorConstruction.cc.i

CMakeFiles/exampleB4a.dir/src/B4DetectorConstruction.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exampleB4a.dir/src/B4DetectorConstruction.cc.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ktsuri/MyGeant4/B4/B4a/src/B4DetectorConstruction.cc -o CMakeFiles/exampleB4a.dir/src/B4DetectorConstruction.cc.s

CMakeFiles/exampleB4a.dir/src/B4DetectorConstruction.cc.o.requires:

.PHONY : CMakeFiles/exampleB4a.dir/src/B4DetectorConstruction.cc.o.requires

CMakeFiles/exampleB4a.dir/src/B4DetectorConstruction.cc.o.provides: CMakeFiles/exampleB4a.dir/src/B4DetectorConstruction.cc.o.requires
	$(MAKE) -f CMakeFiles/exampleB4a.dir/build.make CMakeFiles/exampleB4a.dir/src/B4DetectorConstruction.cc.o.provides.build
.PHONY : CMakeFiles/exampleB4a.dir/src/B4DetectorConstruction.cc.o.provides

CMakeFiles/exampleB4a.dir/src/B4DetectorConstruction.cc.o.provides.build: CMakeFiles/exampleB4a.dir/src/B4DetectorConstruction.cc.o


CMakeFiles/exampleB4a.dir/src/B4PrimaryGeneratorAction.cc.o: CMakeFiles/exampleB4a.dir/flags.make
CMakeFiles/exampleB4a.dir/src/B4PrimaryGeneratorAction.cc.o: /home/ktsuri/MyGeant4/B4/B4a/src/B4PrimaryGeneratorAction.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ktsuri/MyGeant4/B4/B4a_work/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/exampleB4a.dir/src/B4PrimaryGeneratorAction.cc.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/exampleB4a.dir/src/B4PrimaryGeneratorAction.cc.o -c /home/ktsuri/MyGeant4/B4/B4a/src/B4PrimaryGeneratorAction.cc

CMakeFiles/exampleB4a.dir/src/B4PrimaryGeneratorAction.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exampleB4a.dir/src/B4PrimaryGeneratorAction.cc.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ktsuri/MyGeant4/B4/B4a/src/B4PrimaryGeneratorAction.cc > CMakeFiles/exampleB4a.dir/src/B4PrimaryGeneratorAction.cc.i

CMakeFiles/exampleB4a.dir/src/B4PrimaryGeneratorAction.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exampleB4a.dir/src/B4PrimaryGeneratorAction.cc.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ktsuri/MyGeant4/B4/B4a/src/B4PrimaryGeneratorAction.cc -o CMakeFiles/exampleB4a.dir/src/B4PrimaryGeneratorAction.cc.s

CMakeFiles/exampleB4a.dir/src/B4PrimaryGeneratorAction.cc.o.requires:

.PHONY : CMakeFiles/exampleB4a.dir/src/B4PrimaryGeneratorAction.cc.o.requires

CMakeFiles/exampleB4a.dir/src/B4PrimaryGeneratorAction.cc.o.provides: CMakeFiles/exampleB4a.dir/src/B4PrimaryGeneratorAction.cc.o.requires
	$(MAKE) -f CMakeFiles/exampleB4a.dir/build.make CMakeFiles/exampleB4a.dir/src/B4PrimaryGeneratorAction.cc.o.provides.build
.PHONY : CMakeFiles/exampleB4a.dir/src/B4PrimaryGeneratorAction.cc.o.provides

CMakeFiles/exampleB4a.dir/src/B4PrimaryGeneratorAction.cc.o.provides.build: CMakeFiles/exampleB4a.dir/src/B4PrimaryGeneratorAction.cc.o


CMakeFiles/exampleB4a.dir/src/B4aActionInitialization.cc.o: CMakeFiles/exampleB4a.dir/flags.make
CMakeFiles/exampleB4a.dir/src/B4aActionInitialization.cc.o: /home/ktsuri/MyGeant4/B4/B4a/src/B4aActionInitialization.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ktsuri/MyGeant4/B4/B4a_work/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/exampleB4a.dir/src/B4aActionInitialization.cc.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/exampleB4a.dir/src/B4aActionInitialization.cc.o -c /home/ktsuri/MyGeant4/B4/B4a/src/B4aActionInitialization.cc

CMakeFiles/exampleB4a.dir/src/B4aActionInitialization.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exampleB4a.dir/src/B4aActionInitialization.cc.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ktsuri/MyGeant4/B4/B4a/src/B4aActionInitialization.cc > CMakeFiles/exampleB4a.dir/src/B4aActionInitialization.cc.i

CMakeFiles/exampleB4a.dir/src/B4aActionInitialization.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exampleB4a.dir/src/B4aActionInitialization.cc.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ktsuri/MyGeant4/B4/B4a/src/B4aActionInitialization.cc -o CMakeFiles/exampleB4a.dir/src/B4aActionInitialization.cc.s

CMakeFiles/exampleB4a.dir/src/B4aActionInitialization.cc.o.requires:

.PHONY : CMakeFiles/exampleB4a.dir/src/B4aActionInitialization.cc.o.requires

CMakeFiles/exampleB4a.dir/src/B4aActionInitialization.cc.o.provides: CMakeFiles/exampleB4a.dir/src/B4aActionInitialization.cc.o.requires
	$(MAKE) -f CMakeFiles/exampleB4a.dir/build.make CMakeFiles/exampleB4a.dir/src/B4aActionInitialization.cc.o.provides.build
.PHONY : CMakeFiles/exampleB4a.dir/src/B4aActionInitialization.cc.o.provides

CMakeFiles/exampleB4a.dir/src/B4aActionInitialization.cc.o.provides.build: CMakeFiles/exampleB4a.dir/src/B4aActionInitialization.cc.o


CMakeFiles/exampleB4a.dir/src/B4aEventAction.cc.o: CMakeFiles/exampleB4a.dir/flags.make
CMakeFiles/exampleB4a.dir/src/B4aEventAction.cc.o: /home/ktsuri/MyGeant4/B4/B4a/src/B4aEventAction.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ktsuri/MyGeant4/B4/B4a_work/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/exampleB4a.dir/src/B4aEventAction.cc.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/exampleB4a.dir/src/B4aEventAction.cc.o -c /home/ktsuri/MyGeant4/B4/B4a/src/B4aEventAction.cc

CMakeFiles/exampleB4a.dir/src/B4aEventAction.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exampleB4a.dir/src/B4aEventAction.cc.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ktsuri/MyGeant4/B4/B4a/src/B4aEventAction.cc > CMakeFiles/exampleB4a.dir/src/B4aEventAction.cc.i

CMakeFiles/exampleB4a.dir/src/B4aEventAction.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exampleB4a.dir/src/B4aEventAction.cc.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ktsuri/MyGeant4/B4/B4a/src/B4aEventAction.cc -o CMakeFiles/exampleB4a.dir/src/B4aEventAction.cc.s

CMakeFiles/exampleB4a.dir/src/B4aEventAction.cc.o.requires:

.PHONY : CMakeFiles/exampleB4a.dir/src/B4aEventAction.cc.o.requires

CMakeFiles/exampleB4a.dir/src/B4aEventAction.cc.o.provides: CMakeFiles/exampleB4a.dir/src/B4aEventAction.cc.o.requires
	$(MAKE) -f CMakeFiles/exampleB4a.dir/build.make CMakeFiles/exampleB4a.dir/src/B4aEventAction.cc.o.provides.build
.PHONY : CMakeFiles/exampleB4a.dir/src/B4aEventAction.cc.o.provides

CMakeFiles/exampleB4a.dir/src/B4aEventAction.cc.o.provides.build: CMakeFiles/exampleB4a.dir/src/B4aEventAction.cc.o


# Object files for target exampleB4a
exampleB4a_OBJECTS = \
"CMakeFiles/exampleB4a.dir/exampleB4a.cc.o" \
"CMakeFiles/exampleB4a.dir/src/B4aSteppingAction.cc.o" \
"CMakeFiles/exampleB4a.dir/src/B4RunAction.cc.o" \
"CMakeFiles/exampleB4a.dir/src/B4DetectorConstruction.cc.o" \
"CMakeFiles/exampleB4a.dir/src/B4PrimaryGeneratorAction.cc.o" \
"CMakeFiles/exampleB4a.dir/src/B4aActionInitialization.cc.o" \
"CMakeFiles/exampleB4a.dir/src/B4aEventAction.cc.o"

# External object files for target exampleB4a
exampleB4a_EXTERNAL_OBJECTS =

exampleB4a: CMakeFiles/exampleB4a.dir/exampleB4a.cc.o
exampleB4a: CMakeFiles/exampleB4a.dir/src/B4aSteppingAction.cc.o
exampleB4a: CMakeFiles/exampleB4a.dir/src/B4RunAction.cc.o
exampleB4a: CMakeFiles/exampleB4a.dir/src/B4DetectorConstruction.cc.o
exampleB4a: CMakeFiles/exampleB4a.dir/src/B4PrimaryGeneratorAction.cc.o
exampleB4a: CMakeFiles/exampleB4a.dir/src/B4aActionInitialization.cc.o
exampleB4a: CMakeFiles/exampleB4a.dir/src/B4aEventAction.cc.o
exampleB4a: CMakeFiles/exampleB4a.dir/build.make
exampleB4a: /home/rmatsumoto/geant4_install/geant4.10.04_build/BuildProducts/lib/libG4Tree.so
exampleB4a: /home/rmatsumoto/geant4_install/geant4.10.04_build/BuildProducts/lib/libG4GMocren.so
exampleB4a: /home/rmatsumoto/geant4_install/geant4.10.04_build/BuildProducts/lib/libG4visHepRep.so
exampleB4a: /home/rmatsumoto/geant4_install/geant4.10.04_build/BuildProducts/lib/libG4RayTracer.so
exampleB4a: /home/rmatsumoto/geant4_install/geant4.10.04_build/BuildProducts/lib/libG4VRML.so
exampleB4a: /home/rmatsumoto/geant4_install/geant4.10.04_build/BuildProducts/lib/libG4OpenGL.so
exampleB4a: /home/rmatsumoto/geant4_install/geant4.10.04_build/BuildProducts/lib/libG4gl2ps.so
exampleB4a: /home/rmatsumoto/geant4_install/geant4.10.04_build/BuildProducts/lib/libG4interfaces.so
exampleB4a: /home/rmatsumoto/geant4_install/geant4.10.04_build/BuildProducts/lib/libG4persistency.so
exampleB4a: /home/rmatsumoto/geant4_install/geant4.10.04_build/BuildProducts/lib/libG4error_propagation.so
exampleB4a: /home/rmatsumoto/geant4_install/geant4.10.04_build/BuildProducts/lib/libG4readout.so
exampleB4a: /home/rmatsumoto/geant4_install/geant4.10.04_build/BuildProducts/lib/libG4physicslists.so
exampleB4a: /home/rmatsumoto/geant4_install/geant4.10.04_build/BuildProducts/lib/libG4parmodels.so
exampleB4a: /home/rmatsumoto/geant4_install/geant4.10.04_build/BuildProducts/lib/libG4FR.so
exampleB4a: /home/rmatsumoto/geant4_install/geant4.10.04_build/BuildProducts/lib/libG4vis_management.so
exampleB4a: /home/rmatsumoto/geant4_install/geant4.10.04_build/BuildProducts/lib/libG4modeling.so
exampleB4a: /usr/lib/x86_64-linux-gnu/libGLU.so
exampleB4a: /usr/lib/x86_64-linux-gnu/libGL.so
exampleB4a: /usr/local/Qt5.11.1/Qt5.11.1_install/5.11.1/gcc_64/lib/libQt5OpenGL.so.5.11.1
exampleB4a: /usr/local/Qt5.11.1/Qt5.11.1_install/5.11.1/gcc_64/lib/libQt5PrintSupport.so.5.11.1
exampleB4a: /usr/local/Qt5.11.1/Qt5.11.1_install/5.11.1/gcc_64/lib/libQt5Widgets.so.5.11.1
exampleB4a: /usr/local/Qt5.11.1/Qt5.11.1_install/5.11.1/gcc_64/lib/libQt5Gui.so.5.11.1
exampleB4a: /usr/local/Qt5.11.1/Qt5.11.1_install/5.11.1/gcc_64/lib/libQt5Core.so.5.11.1
exampleB4a: /home/rmatsumoto/geant4_install/geant4.10.04_build/BuildProducts/lib/libG4run.so
exampleB4a: /home/rmatsumoto/geant4_install/geant4.10.04_build/BuildProducts/lib/libG4event.so
exampleB4a: /home/rmatsumoto/geant4_install/geant4.10.04_build/BuildProducts/lib/libG4tracking.so
exampleB4a: /home/rmatsumoto/geant4_install/geant4.10.04_build/BuildProducts/lib/libG4processes.so
exampleB4a: /home/rmatsumoto/geant4_install/geant4.10.04_build/BuildProducts/lib/libG4analysis.so
exampleB4a: /home/rmatsumoto/geant4_install/geant4.10.04_build/BuildProducts/lib/libG4zlib.so
exampleB4a: /usr/lib/x86_64-linux-gnu/libexpat.so
exampleB4a: /home/rmatsumoto/geant4_install/geant4.10.04_build/BuildProducts/lib/libG4digits_hits.so
exampleB4a: /home/rmatsumoto/geant4_install/geant4.10.04_build/BuildProducts/lib/libG4track.so
exampleB4a: /home/rmatsumoto/geant4_install/geant4.10.04_build/BuildProducts/lib/libG4particles.so
exampleB4a: /home/rmatsumoto/geant4_install/geant4.10.04_build/BuildProducts/lib/libG4geometry.so
exampleB4a: /home/rmatsumoto/geant4_install/geant4.10.04_build/BuildProducts/lib/libG4materials.so
exampleB4a: /home/rmatsumoto/geant4_install/geant4.10.04_build/BuildProducts/lib/libG4graphics_reps.so
exampleB4a: /home/rmatsumoto/geant4_install/geant4.10.04_build/BuildProducts/lib/libG4intercoms.so
exampleB4a: /home/rmatsumoto/geant4_install/geant4.10.04_build/BuildProducts/lib/libG4global.so
exampleB4a: /home/rmatsumoto/geant4_install/geant4.10.04_build/BuildProducts/lib/libG4clhep.so
exampleB4a: CMakeFiles/exampleB4a.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ktsuri/MyGeant4/B4/B4a_work/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable exampleB4a"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/exampleB4a.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/exampleB4a.dir/build: exampleB4a

.PHONY : CMakeFiles/exampleB4a.dir/build

CMakeFiles/exampleB4a.dir/requires: CMakeFiles/exampleB4a.dir/exampleB4a.cc.o.requires
CMakeFiles/exampleB4a.dir/requires: CMakeFiles/exampleB4a.dir/src/B4aSteppingAction.cc.o.requires
CMakeFiles/exampleB4a.dir/requires: CMakeFiles/exampleB4a.dir/src/B4RunAction.cc.o.requires
CMakeFiles/exampleB4a.dir/requires: CMakeFiles/exampleB4a.dir/src/B4DetectorConstruction.cc.o.requires
CMakeFiles/exampleB4a.dir/requires: CMakeFiles/exampleB4a.dir/src/B4PrimaryGeneratorAction.cc.o.requires
CMakeFiles/exampleB4a.dir/requires: CMakeFiles/exampleB4a.dir/src/B4aActionInitialization.cc.o.requires
CMakeFiles/exampleB4a.dir/requires: CMakeFiles/exampleB4a.dir/src/B4aEventAction.cc.o.requires

.PHONY : CMakeFiles/exampleB4a.dir/requires

CMakeFiles/exampleB4a.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/exampleB4a.dir/cmake_clean.cmake
.PHONY : CMakeFiles/exampleB4a.dir/clean

CMakeFiles/exampleB4a.dir/depend:
	cd /home/ktsuri/MyGeant4/B4/B4a_work && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ktsuri/MyGeant4/B4/B4a /home/ktsuri/MyGeant4/B4/B4a /home/ktsuri/MyGeant4/B4/B4a_work /home/ktsuri/MyGeant4/B4/B4a_work /home/ktsuri/MyGeant4/B4/B4a_work/CMakeFiles/exampleB4a.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/exampleB4a.dir/depend

