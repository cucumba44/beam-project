cmake_minimum_required(VERSION 3.16)
project(BeamSolver LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Library: the physics
add_library(beam src/beam.cpp)
target_include_directories(beam PUBLIC include)
target_compile_options(beam PRIVATE -Wall -Wextra -Wshadow)

# Executable: the program that uses it
add_executable(beam_table src/main.cpp)
target_link_libraries(beam_table PRIVATE beam)
target_compile_options(beam_table PRIVATE -Wall -Wextra -Wshadow)