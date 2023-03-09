SET(SOURCES
	branch.cpp
	branch.h
	fruit.cpp
	fruit.h
	tree.cpp
	tree.h
)

add_executable (C3 "C3.cpp" ${SOURCES} )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET C3 PROPERTY CXX_STANDARD 20)
endif()