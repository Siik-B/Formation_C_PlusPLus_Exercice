SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")

add_executable (F1 "F1.cpp" )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET F1 PROPERTY CXX_STANDARD 20)
endif()

