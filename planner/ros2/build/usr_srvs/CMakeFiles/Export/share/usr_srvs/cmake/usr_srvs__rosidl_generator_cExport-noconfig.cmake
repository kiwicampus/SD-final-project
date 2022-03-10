#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "usr_srvs::usr_srvs__rosidl_generator_c" for configuration ""
set_property(TARGET usr_srvs::usr_srvs__rosidl_generator_c APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(usr_srvs::usr_srvs__rosidl_generator_c PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libusr_srvs__rosidl_generator_c.so"
  IMPORTED_SONAME_NOCONFIG "libusr_srvs__rosidl_generator_c.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS usr_srvs::usr_srvs__rosidl_generator_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_usr_srvs::usr_srvs__rosidl_generator_c "${_IMPORT_PREFIX}/lib/libusr_srvs__rosidl_generator_c.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
