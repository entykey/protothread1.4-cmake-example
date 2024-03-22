cmake_minimum_required(VERSION 3.0)
project(pt)

# Create a dummy target if no source files are found
if(NOT EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/pt.c")
    add_library(pt INTERFACE)
else()
    message(FATAL_ERROR "No source files found for pt library")
endif()

# Set include directory
target_include_directories(pt INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}")
