cmake_minimum_required(VERSION 3.26)
project(PruebaHilosConcurrencia)

set(CMAKE_CXX_STANDARD 17)

add_executable(PruebaHilosConcurrencia main.cpp
        Cliente.cpp
        Cajero.cpp
        Cliente.h
        Cajero.h
)
