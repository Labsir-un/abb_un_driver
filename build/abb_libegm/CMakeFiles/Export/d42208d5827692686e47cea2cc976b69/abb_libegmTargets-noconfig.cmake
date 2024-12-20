#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "abb_libegm::abb_libegm" for configuration ""
set_property(TARGET abb_libegm::abb_libegm APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(abb_libegm::abb_libegm PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libabb_libegm.dylib"
  IMPORTED_SONAME_NOCONFIG "@rpath/libabb_libegm.dylib"
  )

list(APPEND _cmake_import_check_targets abb_libegm::abb_libegm )
list(APPEND _cmake_import_check_files_for_abb_libegm::abb_libegm "${_IMPORT_PREFIX}/lib/libabb_libegm.dylib" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
