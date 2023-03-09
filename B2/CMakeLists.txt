
add_executable (B2 "B2.cpp" )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET B2 PROPERTY CXX_STANDARD 20)
endif()