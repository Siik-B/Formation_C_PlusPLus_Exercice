
add_executable (E9 "E9.cpp" )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET E9 PROPERTY CXX_STANDARD 20)
endif()