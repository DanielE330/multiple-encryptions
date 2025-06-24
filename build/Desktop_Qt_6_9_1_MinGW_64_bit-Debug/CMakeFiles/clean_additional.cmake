# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\encryption_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\encryption_autogen.dir\\ParseCache.txt"
  "encryption_autogen"
  )
endif()
