#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "abb_egm_rws_managers::abb_egm_rws_managers" for configuration "RelWithDebInfo"
set_property(TARGET abb_egm_rws_managers::abb_egm_rws_managers APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(abb_egm_rws_managers::abb_egm_rws_managers PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libabb_egm_rws_managers.dylib"
  IMPORTED_SONAME_RELWITHDEBINFO "@rpath/libabb_egm_rws_managers.dylib"
  )

list(APPEND _cmake_import_check_targets abb_egm_rws_managers::abb_egm_rws_managers )
list(APPEND _cmake_import_check_files_for_abb_egm_rws_managers::abb_egm_rws_managers "${_IMPORT_PREFIX}/lib/libabb_egm_rws_managers.dylib" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
