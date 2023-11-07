
add_executable (G2 "G2.cpp" )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET G2 PROPERTY CXX_STANDARD 20)
endif()

