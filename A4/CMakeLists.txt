SET(SOURCES
	Add.cpp
	Add.h
)

add_executable (A4 "A4.cpp" ${SOURCES} )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET A4 PROPERTY CXX_STANDARD 20)
endif()