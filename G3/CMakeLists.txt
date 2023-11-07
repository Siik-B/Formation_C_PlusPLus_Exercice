
add_executable (G3 "G3.cpp" )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET G3 PROPERTY CXX_STANDARD 20)
endif()

