cmake_minimum_required(VERSION 3.21)
project(sfmlSnake)

set(CMAKE_CXX_STANDARD 14)

add_executable(sfmlSnake main.cpp Snake.cpp Snake.h Apple.cpp Apple.h)
