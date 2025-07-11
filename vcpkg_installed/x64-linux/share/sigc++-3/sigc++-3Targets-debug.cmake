#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "sigc-3.0" for configuration "Debug"
set_property(TARGET sigc-3.0 APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(sigc-3.0 PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_DEBUG "CXX"
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/debug/lib/libsigc-3.0.a"
  )

list(APPEND _cmake_import_check_targets sigc-3.0 )
list(APPEND _cmake_import_check_files_for_sigc-3.0 "${_IMPORT_PREFIX}/debug/lib/libsigc-3.0.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
