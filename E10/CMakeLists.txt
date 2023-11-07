
add_executable (E10 "E10.cpp" )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET E10 PROPERTY CXX_STANDARD 20)
endif()