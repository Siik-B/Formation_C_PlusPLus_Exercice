# CMakeList.txt : projet CMake pour A0, incluez la source et définissez
# la logique spécifique au projet ici.
#

set(CMAKE_GENERATOR_PLATFORM x64)

# Ajoutez une source à l'exécutable de ce projet.
add_executable (A2 "A2.cpp" )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET A2 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Ajoutez des tests et installez des cibles si nécessaire.
