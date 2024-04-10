cmake_minimum_required(VERSION 3.27)
project(CPP_Training_zone_CS202)

set(CMAKE_CXX_STANDARD 14)

include_directories(LinkedList)

add_executable(CPP_Training_zone_CS202
        LinkedList/Node.cpp
        LinkedList/Node.h
        LinkedList/LinkedList.h
        LinkedList/LinkedList.cpp)
