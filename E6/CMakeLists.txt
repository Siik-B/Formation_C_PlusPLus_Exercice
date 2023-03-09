
add_executable (E6 "E6.cpp" )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET E6 PROPERTY CXX_STANDARD 20)
endif()