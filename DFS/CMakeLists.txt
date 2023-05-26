cmake_minimum_required(VERSION 3.25)
project(DFT)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(DFT
        src/DepthFirstTraverse.cpp
        include/DepthFirstTraverse.h
        include/MyStack.h
        src/main.cpp
        #        src/test.cpp
        src/Graph.cpp
        include/Graph.h
        src/PrintMap.cpp
        include/PrintMap.h
        )
