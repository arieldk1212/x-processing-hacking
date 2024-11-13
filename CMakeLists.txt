cmake_minimum_required(VERSION 3.24)
project(x_processing_hacking)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20 -g") 

# find_package(OpenGL REQUIRED)

set(IMGUI imgui)
set(IMGUI_BACKENDS imgui/backends)

set(SOURCES
DSP/Data.cpp
UI/Gui.cpp
GPS/Reciever.cpp
App.cpp
)

add_executable(x ${SOURCES})