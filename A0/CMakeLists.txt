# CMakeList.txt : projet CMake pour A0, incluez la source et définissez
# la logique spécifique au projet ici.
#

# Ajoutez une source à l'exécutable de ce projet.
add_executable (A0 "A0.cpp" )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET A0 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Ajoutez des tests et installez des cibles si nécessaire.
