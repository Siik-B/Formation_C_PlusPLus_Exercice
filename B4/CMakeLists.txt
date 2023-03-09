
add_executable (B4 "B4.cpp" )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET B4 PROPERTY CXX_STANDARD 20)
endif()