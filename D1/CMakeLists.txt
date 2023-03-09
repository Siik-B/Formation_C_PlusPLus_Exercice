
add_executable (D1 "D1.cpp" )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET D1 PROPERTY CXX_STANDARD 20)
endif()