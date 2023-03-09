
add_executable (E5 "E5.cpp" )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET E5 PROPERTY CXX_STANDARD 20)
endif()