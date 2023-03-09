
add_executable (E8 "E8.cpp" )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET E8 PROPERTY CXX_STANDARD 20)
endif()