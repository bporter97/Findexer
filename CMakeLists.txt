# cmake ver
cmake_minimum_required(VERSION 3.12.0)

# project name
project(Main)

# specify c++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# compile project to executable
add_executable(findex src/main.cpp)