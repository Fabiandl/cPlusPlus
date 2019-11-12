cmake_minimum_required(VERSION 3.15)
project(C__)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(Übung1)
include_directories(Übung2)
include_directories(Übung3)
include_directories(Übung4)
include_directories(Übung4/Drehmel_Fabian_uebung4)
include_directories(Übung5/Drehmel_Fabian_Uebung5)

add_executable(C__
        Übung5/Drehmel_Fabian_Uebung5/array2d.h
        Übung5/Drehmel_Fabian_Uebung5/Aufgabe_5.3.cpp

       )
