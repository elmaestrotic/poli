cmake_minimum_required(VERSION 3.20)
project(morfo)

set(CMAKE_CXX_STANDARD 17)

add_executable(morfo main.cpp Animal.cpp Animal.h Perro.cpp Perro.h Gato.cpp Gato.h)
