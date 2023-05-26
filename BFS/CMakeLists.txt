cmake_minimum_required(VERSION 3.25)
project(BFS)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(BFS
        include/Graph.h
        include/MyStack.h
        include/PrintMap.h
        src/Graph.cpp
        src/main.cpp
        src/PrintMap.cpp
        #        src/test.cpp
        src/BreadFirstTraversal.cpp
        include/BreadFirstTraversal.h
        include/MyQueue.h)
