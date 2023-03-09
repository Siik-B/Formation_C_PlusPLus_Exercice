
add_definitions(-DBUILDING_DLL )

add_executable(D3_Logger "Logger.h" "Logger.cpp" )

set_target_properties(D3_Logger PROPERTIES CXX_VISIBILITY_PRESET hidden)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET D3 PROPERTY CXX_STANDARD 20)
endif()