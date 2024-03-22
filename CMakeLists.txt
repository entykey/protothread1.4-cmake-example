cmake_minimum_required(VERSION 3.0)
project(pt_example C)

# Add executable
add_executable(pt_example without_protothread.c)

# Include pt.h header file
target_include_directories(pt_example PRIVATE pt)

# Set language to C for the entire project
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
