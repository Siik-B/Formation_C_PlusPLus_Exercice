SET(SOURCES
	tree.cpp
	tree.h
)

add_executable (C5 "C5.cpp" ${SOURCES} )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET C5 PROPERTY CXX_STANDARD 20)
endif()