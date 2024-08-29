cmake_minimum_required(VERSION 3.10)
project(ObliviousMinHeap)

set(CMAKE_CXX_STANDARD 11)

include_directories(include)

add_executable(ObliviousMinHeap
    src/main.cpp
    src/ObliviousMinHeap.cpp
    src/MPCOperations.cpp
    src/Utils.cpp
)
