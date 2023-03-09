
add_executable (E2 "E2.cpp" )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET E2 PROPERTY CXX_STANDARD 20)
endif()