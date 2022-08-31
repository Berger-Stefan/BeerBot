# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_template_code_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED template_code_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(template_code_FOUND FALSE)
  elseif(NOT template_code_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(template_code_FOUND FALSE)
  endif()
  return()
endif()
set(_template_code_CONFIG_INCLUDED TRUE)

# output package information
if(NOT template_code_FIND_QUIETLY)
  message(STATUS "Found template_code: 0.0.0 (${template_code_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'template_code' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${template_code_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(template_code_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${template_code_DIR}/${_extra}")
endforeach()