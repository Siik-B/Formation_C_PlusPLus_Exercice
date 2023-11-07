
add_executable (E12 "E12.cpp" )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET E12 PROPERTY CXX_STANDARD 20)
endif()