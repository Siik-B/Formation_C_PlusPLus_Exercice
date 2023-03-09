
add_executable (E1 "E1.cpp" )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET E1 PROPERTY CXX_STANDARD 20)
endif()