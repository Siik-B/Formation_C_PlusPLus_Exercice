SET(SOURCES
	Circle.cpp
	Circle.h
	Shape.cpp
	Shape.h
	Square.cpp
	Square.h
	Triangle.cpp
	Triangle.h
)



add_executable (E3 "E3.cpp" ${SOURCES} )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET E3 PROPERTY CXX_STANDARD 20)
endif()