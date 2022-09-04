# cmake ver
cmake_minimum_required(VERSION 3.10)

# project name
project(Main)

# compile project to executable
add_executable(Main src/main.cpp)

# specify c++ standard
set(CMAKE_CC_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)