
INCLUDE_DIRECTORIES( ".." )

add_executable (D3 "D3.cpp" )
target_link_libraries( D3 PUBLIC D3_Logger )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET D3 PROPERTY CXX_STANDARD 20)
endif()