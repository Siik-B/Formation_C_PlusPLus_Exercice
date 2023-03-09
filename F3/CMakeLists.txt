SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")

add_executable (F3 "F3.cpp" )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET F3 PROPERTY CXX_STANDARD 20)
endif()

