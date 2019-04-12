cmake_minimum_required(VERSION 3.10)
project(Physics)

set(CMAKE_CXX_STANDARD 11)

add_executable(Physics main.cpp Dot.h Process.cpp Process.h)