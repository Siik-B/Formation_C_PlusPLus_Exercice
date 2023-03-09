
add_executable (B6 "B6.cpp" )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET B6 PROPERTY CXX_STANDARD 20)
endif()