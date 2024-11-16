cmake_minimum_required(VERSION 3.24)
project(x_processing_hacking VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_INCLUDE_CURRENT_DIR)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g") 

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