# Install script for directory: /Users/amoralesma/Documents/research/abb_driver_pci/src/abb_libegm

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
    set(CMAKE_INSTALL_CONFIG_NAME "")
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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/Users/amoralesma/Documents/research/abb_driver_pci/src/abb_libegm/include/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/abb_libegm" TYPE FILE FILES
    "/Users/amoralesma/Documents/research/abb_driver_pci/src/abb_libegm/proto/egm.proto"
    "/Users/amoralesma/Documents/research/abb_driver_pci/src/abb_libegm/proto/egm_wrapper.proto"
    "/Users/amoralesma/Documents/research/abb_driver_pci/src/abb_libegm/proto/egm_wrapper_trajectory.proto"
    "/Users/amoralesma/Documents/research/abb_driver_pci/build/abb_libegm/egm.pb.h"
    "/Users/amoralesma/Documents/research/abb_driver_pci/build/abb_libegm/egm_wrapper.pb.h"
    "/Users/amoralesma/Documents/research/abb_driver_pci/build/abb_libegm/egm_wrapper_trajectory.pb.h"
    "/Users/amoralesma/Documents/research/abb_driver_pci/build/abb_libegm/abb_libegm_export.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/Users/amoralesma/Documents/research/abb_driver_pci/build/abb_libegm/libabb_libegm.dylib")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libabb_libegm.dylib" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libabb_libegm.dylib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/local/Caskroom/miniforge/base/envs/ros-noetic-tools/bin/llvm-strip" -x "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libabb_libegm.dylib")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/abb_libegm" TYPE FILE FILES
    "/Users/amoralesma/Documents/research/abb_driver_pci/build/abb_libegm//CMakeFiles/abb_libegmConfig.cmake"
    "/Users/amoralesma/Documents/research/abb_driver_pci/build/abb_libegm/abb_libegmConfigVersion.cmake"
    "/Users/amoralesma/Documents/research/abb_driver_pci/src/abb_libegm/package.xml"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/abb_libegm/abb_libegmTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/abb_libegm/abb_libegmTargets.cmake"
         "/Users/amoralesma/Documents/research/abb_driver_pci/build/abb_libegm/CMakeFiles/Export/d42208d5827692686e47cea2cc976b69/abb_libegmTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/abb_libegm/abb_libegmTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/abb_libegm/abb_libegmTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/abb_libegm" TYPE FILE FILES "/Users/amoralesma/Documents/research/abb_driver_pci/build/abb_libegm/CMakeFiles/Export/d42208d5827692686e47cea2cc976b69/abb_libegmTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/abb_libegm" TYPE FILE FILES "/Users/amoralesma/Documents/research/abb_driver_pci/build/abb_libegm/CMakeFiles/Export/d42208d5827692686e47cea2cc976b69/abb_libegmTargets-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/Users/amoralesma/Documents/research/abb_driver_pci/build/abb_libegm/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
