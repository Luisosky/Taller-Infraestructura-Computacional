cmake_minimum_required(VERSION 3.29)
project(PruebaConcurrencia)

set(CMAKE_CXX_STANDARD 20)

add_executable(PruebaConcurrencia main.cpp
        restaurante.h
        restaurante.cpp)
