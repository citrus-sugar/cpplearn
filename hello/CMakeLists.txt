cmake_minimum_required(VERSION 3.0.0)

project(hello)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -save-temps=obj")

add_executable(hello hello.cpp Log.cpp)