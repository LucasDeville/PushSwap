# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps/sfml-subbuild

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps/sfml-subbuild

# Utility rule file for sfml-populate.

# Include the progress variables for this target.
include CMakeFiles/sfml-populate.dir/progress.make

CMakeFiles/sfml-populate: CMakeFiles/sfml-populate-complete


CMakeFiles/sfml-populate-complete: sfml-populate-prefix/src/sfml-populate-stamp/sfml-populate-install
CMakeFiles/sfml-populate-complete: sfml-populate-prefix/src/sfml-populate-stamp/sfml-populate-mkdir
CMakeFiles/sfml-populate-complete: sfml-populate-prefix/src/sfml-populate-stamp/sfml-populate-download
CMakeFiles/sfml-populate-complete: sfml-populate-prefix/src/sfml-populate-stamp/sfml-populate-update
CMakeFiles/sfml-populate-complete: sfml-populate-prefix/src/sfml-populate-stamp/sfml-populate-patch
CMakeFiles/sfml-populate-complete: sfml-populate-prefix/src/sfml-populate-stamp/sfml-populate-configure
CMakeFiles/sfml-populate-complete: sfml-populate-prefix/src/sfml-populate-stamp/sfml-populate-build
CMakeFiles/sfml-populate-complete: sfml-populate-prefix/src/sfml-populate-stamp/sfml-populate-install
CMakeFiles/sfml-populate-complete: sfml-populate-prefix/src/sfml-populate-stamp/sfml-populate-test
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps/sfml-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Completed 'sfml-populate'"
	/usr/bin/cmake -E make_directory /nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps/sfml-subbuild/CMakeFiles
	/usr/bin/cmake -E touch /nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps/sfml-subbuild/CMakeFiles/sfml-populate-complete
	/usr/bin/cmake -E touch /nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps/sfml-subbuild/sfml-populate-prefix/src/sfml-populate-stamp/sfml-populate-done

sfml-populate-prefix/src/sfml-populate-stamp/sfml-populate-install: sfml-populate-prefix/src/sfml-populate-stamp/sfml-populate-build
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps/sfml-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "No install step for 'sfml-populate'"
	cd /nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps/sfml-build && /usr/bin/cmake -E echo_append
	cd /nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps/sfml-build && /usr/bin/cmake -E touch /nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps/sfml-subbuild/sfml-populate-prefix/src/sfml-populate-stamp/sfml-populate-install

sfml-populate-prefix/src/sfml-populate-stamp/sfml-populate-mkdir:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps/sfml-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Creating directories for 'sfml-populate'"
	/usr/bin/cmake -E make_directory /nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps/sfml-src
	/usr/bin/cmake -E make_directory /nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps/sfml-build
	/usr/bin/cmake -E make_directory /nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps/sfml-subbuild/sfml-populate-prefix
	/usr/bin/cmake -E make_directory /nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps/sfml-subbuild/sfml-populate-prefix/tmp
	/usr/bin/cmake -E make_directory /nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps/sfml-subbuild/sfml-populate-prefix/src/sfml-populate-stamp
	/usr/bin/cmake -E make_directory /nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps/sfml-subbuild/sfml-populate-prefix/src
	/usr/bin/cmake -E make_directory /nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps/sfml-subbuild/sfml-populate-prefix/src/sfml-populate-stamp
	/usr/bin/cmake -E touch /nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps/sfml-subbuild/sfml-populate-prefix/src/sfml-populate-stamp/sfml-populate-mkdir

sfml-populate-prefix/src/sfml-populate-stamp/sfml-populate-download: sfml-populate-prefix/src/sfml-populate-stamp/sfml-populate-urlinfo.txt
sfml-populate-prefix/src/sfml-populate-stamp/sfml-populate-download: sfml-populate-prefix/src/sfml-populate-stamp/sfml-populate-mkdir
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps/sfml-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Performing download step (download, verify and extract) for 'sfml-populate'"
	cd /nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps && /usr/bin/cmake -P /nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps/sfml-subbuild/sfml-populate-prefix/src/sfml-populate-stamp/download-sfml-populate.cmake
	cd /nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps && /usr/bin/cmake -P /nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps/sfml-subbuild/sfml-populate-prefix/src/sfml-populate-stamp/verify-sfml-populate.cmake
	cd /nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps && /usr/bin/cmake -P /nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps/sfml-subbuild/sfml-populate-prefix/src/sfml-populate-stamp/extract-sfml-populate.cmake
	cd /nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps && /usr/bin/cmake -E touch /nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps/sfml-subbuild/sfml-populate-prefix/src/sfml-populate-stamp/sfml-populate-download

sfml-populate-prefix/src/sfml-populate-stamp/sfml-populate-update: sfml-populate-prefix/src/sfml-populate-stamp/sfml-populate-download
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps/sfml-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "No update step for 'sfml-populate'"
	/usr/bin/cmake -E echo_append
	/usr/bin/cmake -E touch /nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps/sfml-subbuild/sfml-populate-prefix/src/sfml-populate-stamp/sfml-populate-update

sfml-populate-prefix/src/sfml-populate-stamp/sfml-populate-patch: sfml-populate-prefix/src/sfml-populate-stamp/sfml-populate-download
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps/sfml-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "No patch step for 'sfml-populate'"
	/usr/bin/cmake -E echo_append
	/usr/bin/cmake -E touch /nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps/sfml-subbuild/sfml-populate-prefix/src/sfml-populate-stamp/sfml-populate-patch

sfml-populate-prefix/src/sfml-populate-stamp/sfml-populate-configure: sfml-populate-prefix/tmp/sfml-populate-cfgcmd.txt
sfml-populate-prefix/src/sfml-populate-stamp/sfml-populate-configure: sfml-populate-prefix/src/sfml-populate-stamp/sfml-populate-update
sfml-populate-prefix/src/sfml-populate-stamp/sfml-populate-configure: sfml-populate-prefix/src/sfml-populate-stamp/sfml-populate-patch
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps/sfml-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "No configure step for 'sfml-populate'"
	cd /nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps/sfml-build && /usr/bin/cmake -E echo_append
	cd /nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps/sfml-build && /usr/bin/cmake -E touch /nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps/sfml-subbuild/sfml-populate-prefix/src/sfml-populate-stamp/sfml-populate-configure

sfml-populate-prefix/src/sfml-populate-stamp/sfml-populate-build: sfml-populate-prefix/src/sfml-populate-stamp/sfml-populate-configure
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps/sfml-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "No build step for 'sfml-populate'"
	cd /nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps/sfml-build && /usr/bin/cmake -E echo_append
	cd /nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps/sfml-build && /usr/bin/cmake -E touch /nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps/sfml-subbuild/sfml-populate-prefix/src/sfml-populate-stamp/sfml-populate-build

sfml-populate-prefix/src/sfml-populate-stamp/sfml-populate-test: sfml-populate-prefix/src/sfml-populate-stamp/sfml-populate-install
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps/sfml-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "No test step for 'sfml-populate'"
	cd /nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps/sfml-build && /usr/bin/cmake -E echo_append
	cd /nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps/sfml-build && /usr/bin/cmake -E touch /nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps/sfml-subbuild/sfml-populate-prefix/src/sfml-populate-stamp/sfml-populate-test

sfml-populate: CMakeFiles/sfml-populate
sfml-populate: CMakeFiles/sfml-populate-complete
sfml-populate: sfml-populate-prefix/src/sfml-populate-stamp/sfml-populate-install
sfml-populate: sfml-populate-prefix/src/sfml-populate-stamp/sfml-populate-mkdir
sfml-populate: sfml-populate-prefix/src/sfml-populate-stamp/sfml-populate-download
sfml-populate: sfml-populate-prefix/src/sfml-populate-stamp/sfml-populate-update
sfml-populate: sfml-populate-prefix/src/sfml-populate-stamp/sfml-populate-patch
sfml-populate: sfml-populate-prefix/src/sfml-populate-stamp/sfml-populate-configure
sfml-populate: sfml-populate-prefix/src/sfml-populate-stamp/sfml-populate-build
sfml-populate: sfml-populate-prefix/src/sfml-populate-stamp/sfml-populate-test
sfml-populate: CMakeFiles/sfml-populate.dir/build.make

.PHONY : sfml-populate

# Rule to build all files generated by this target.
CMakeFiles/sfml-populate.dir/build: sfml-populate

.PHONY : CMakeFiles/sfml-populate.dir/build

CMakeFiles/sfml-populate.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sfml-populate.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sfml-populate.dir/clean

CMakeFiles/sfml-populate.dir/depend:
	cd /nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps/sfml-subbuild && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps/sfml-subbuild /nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps/sfml-subbuild /nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps/sfml-subbuild /nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps/sfml-subbuild /nfs/homes/ldeville/Project/push_swap/push_swap_visualizer-master/bin/_deps/sfml-subbuild/CMakeFiles/sfml-populate.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sfml-populate.dir/depend

