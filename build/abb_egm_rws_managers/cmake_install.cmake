# Install script for directory: /Users/amoralesma/Documents/research/abb_driver_pci/src/abb_egm_rws_managers

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/Users/amoralesma/Documents/research/abb_driver_pci/devel")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/local/Caskroom/miniforge/base/envs/ros-noetic-tools/bin/llvm-objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/Users/amoralesma/Documents/research/abb_driver_pci/src/abb_egm_rws_managers/include/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/abb_egm_rws_managers" TYPE FILE FILES
    "/Users/amoralesma/Documents/research/abb_driver_pci/src/abb_egm_rws_managers/proto/robot_controller_description.proto"
    "/Users/amoralesma/Documents/research/abb_driver_pci/build/abb_egm_rws_managers/robot_controller_description.pb.h"
    "/Users/amoralesma/Documents/research/abb_driver_pci/build/abb_egm_rws_managers/abb_egm_rws_managers_export.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/abb_egm_rws_managers" TYPE FILE FILES
    "/Users/amoralesma/Documents/research/abb_driver_pci/build/abb_egm_rws_managers//CMakeFiles/abb_egm_rws_managersConfig.cmake"
    "/Users/amoralesma/Documents/research/abb_driver_pci/build/abb_egm_rws_managers//CMakeFiles/abb_egm_rws_managersConfigVersion.cmake"
    "/Users/amoralesma/Documents/research/abb_driver_pci/src/abb_egm_rws_managers/package.xml"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/Users/amoralesma/Documents/research/abb_driver_pci/build/abb_egm_rws_managers/libabb_egm_rws_managers.dylib")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libabb_egm_rws_managers.dylib" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libabb_egm_rws_managers.dylib")
    execute_process(COMMAND /usr/local/Caskroom/miniforge/base/envs/ros-noetic-tools/bin/install_name_tool
      -delete_rpath "/Users/amoralesma/Documents/research/abb_driver_pci/devel/lib"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libabb_egm_rws_managers.dylib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/local/Caskroom/miniforge/base/envs/ros-noetic-tools/bin/llvm-strip" -x "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libabb_egm_rws_managers.dylib")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/abb_egm_rws_managers/abb_egm_rws_managersTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/abb_egm_rws_managers/abb_egm_rws_managersTargets.cmake"
         "/Users/amoralesma/Documents/research/abb_driver_pci/build/abb_egm_rws_managers/CMakeFiles/Export/3f440e1b14c17a6fcb7a3bdeb2c9e7ce/abb_egm_rws_managersTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/abb_egm_rws_managers/abb_egm_rws_managersTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/abb_egm_rws_managers/abb_egm_rws_managersTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/abb_egm_rws_managers" TYPE FILE FILES "/Users/amoralesma/Documents/research/abb_driver_pci/build/abb_egm_rws_managers/CMakeFiles/Export/3f440e1b14c17a6fcb7a3bdeb2c9e7ce/abb_egm_rws_managersTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/abb_egm_rws_managers" TYPE FILE FILES "/Users/amoralesma/Documents/research/abb_driver_pci/build/abb_egm_rws_managers/CMakeFiles/Export/3f440e1b14c17a6fcb7a3bdeb2c9e7ce/abb_egm_rws_managersTargets-relwithdebinfo.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/Users/amoralesma/Documents/research/abb_driver_pci/build/abb_egm_rws_managers/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
