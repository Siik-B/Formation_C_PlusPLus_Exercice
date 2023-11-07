add_executable (G4 "G4.cpp" ${SOURCES})

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET G4 PROPERTY CXX_STANDARD 20)
endif()

