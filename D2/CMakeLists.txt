SET(SOURCES
  Array.h
  StackTemplate.h
)

add_executable (D2 "D2.cpp" ${SOURCES} )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET D2 PROPERTY CXX_STANDARD 20)
endif()