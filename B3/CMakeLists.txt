
add_executable (B3 "B3.cpp" )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET B3 PROPERTY CXX_STANDARD 20)
endif()