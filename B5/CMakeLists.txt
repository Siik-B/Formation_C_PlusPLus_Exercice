
add_executable (B5 "B5.cpp" )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET B5 PROPERTY CXX_STANDARD 20)
endif()