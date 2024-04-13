cmake_minimum_required(VERSION 3.27)
project(Coche)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Coche
        Booleano.cpp
        Booleano.h
        Char.cpp
        Char.h
        Coche.cpp
        Coche.h
        Double.cpp
        Double.h
        Float.cpp
        Float.h
        Int.cpp
        Int.h
        Intcell.cpp
        Intcell.h
        main.cpp)
