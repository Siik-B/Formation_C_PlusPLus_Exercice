
add_executable (E11 "E11.cpp" )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET E11 PROPERTY CXX_STANDARD 20)
endif()