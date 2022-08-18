cmake_minimum_required(VERSION 3.10)

# set the project name and version
project(Findexer VERSION 0.1)

# add the executable
add_executable(Findexer src/main.cpp)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Configure header file to pass the version number to source code
# configure_file(ex.h ex.h)

#Add directory to the list of paths to search for include files
#target_include_directories(Findexer PUBLIC "${lib}")