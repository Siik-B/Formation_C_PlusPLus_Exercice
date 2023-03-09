SET(SOURCES
	# doubleIntegerManager.h
	# doubleIntegerManager.cpp
	# integerManager.h
	# integerManager.cpp
)

add_executable (C6 "C6.cpp" ${SOURCES} )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET C6 PROPERTY CXX_STANDARD 20)
endif()