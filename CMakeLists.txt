cmake_minimum_required(VERSION 3.30)
project(A2)

set(CMAKE_CXX_STANDARD 20)

add_executable(A2 main.cpp
        LinkedList.cpp
        LinkedList.h
        Stack.cpp
        Stack.h)
