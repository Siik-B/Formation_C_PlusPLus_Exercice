
SET( SOURCES
  Avion.cpp
  Avion.h
  Camion.cpp
  Camion.h
  Transport.cpp
  Transport.h
  TransportFactory.cpp
  TransportFactory.h
  Voiture.cpp
  Voiture.h
)

add_executable (G1 "G1.cpp" ${SOURCES})

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET G1 PROPERTY CXX_STANDARD 20)
endif()

