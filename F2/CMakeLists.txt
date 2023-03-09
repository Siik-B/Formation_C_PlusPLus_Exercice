SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")

add_executable (F2 "F2.cpp" )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET F2 PROPERTY CXX_STANDARD 20)
endif()

