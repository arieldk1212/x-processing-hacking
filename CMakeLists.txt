cmake_minimum_required(VERSION 3.29)
project(x_processing_hacking)

set(CMAKE_CXX_STANDARD 14)

set(SOURCES
dsp/data.cpp
Gui.cpp
)

add_executable(x_processing_hacking SOURCES)
