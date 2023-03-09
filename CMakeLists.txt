# CMakeList.txt : fichier projet CMake de niveau supérieur, effectuez une configuration globale
# et incluez les sous-projets ici.
#
cmake_minimum_required (VERSION 3.8)

# Définir les options de compilation pour le mode Release
if (CMAKE_COMPILER_IS_GNUCC)
    set(CMAKE_CXX_FLAGS_RELEASE "-O3 -DNDEBUG")
endif()

set(CMAKE_C_COMPILER "/usr/bin/gcc")
set(CMAKE_CXX_COMPILER "/usr/bin/g++")

set(CMAKE_CXX_FLAGS_DEBUG_INIT "-Wall")
set(CMAKE_CXX_FLAGS_RELEASE_INIT "-Wall")

project ("Formation")

# Initiation
add_subdirectory ("A0")
add_subdirectory ("A1")
add_subdirectory ("A2")
add_subdirectory ("A3")
add_subdirectory ("A4")

# String
add_subdirectory ("B1")
# Cast
add_subdirectory ("B2")
add_subdirectory ("B3")
add_subdirectory ("B4")
# Enum
add_subdirectory ("B5")
# Auto & Decltype
add_subdirectory ("B6")

# CTor
add_subdirectory ("C1")
# CTor Copy
add_subdirectory ("C2")
# Dynamic allocation
add_subdirectory ("C3")
# Unique ptr
add_subdirectory ("C4")
# Shared ptr
add_subdirectory ("C5")
# Inheritance
add_subdirectory ("C6")
# Multiple inheritance
add_subdirectory ("C7")
# Diamond inheritance
add_subdirectory ("C8")

# Exception
add_subdirectory ("D1")
# Template
add_subdirectory ("D2")
# Library
add_subdirectory ("D3")
add_subdirectory ("D3_Logger")

# String
add_subdirectory ("E1")
# Vector
add_subdirectory ("E2")
# Polymorphisme
add_subdirectory ("E3")
# Algorithm 
add_subdirectory ("E4")
# Algorithm sort
add_subdirectory ("E5")
# Algorithm transform
add_subdirectory ("E6")
# Lambda
add_subdirectory ("E7")
# Lambda capture
add_subdirectory ("E8")

# First multithreading
add_subdirectory ("F1")
# Lock
add_subdirectory ("F2")
# Async
add_subdirectory ("F3")
# Thread pool
add_subdirectory ("F4")

# Factory
add_subdirectory ("G1")