SET(SOURCES
	# Faculty.cpp
	# Faculty.h
	# Person.cpp
	# Person.h
	# Student.cpp
	# Student.h
	# TA.cpp
	# TA.h
)

add_executable (C7 "C7.cpp" ${SOURCES} )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET C7 PROPERTY CXX_STANDARD 20)
endif()