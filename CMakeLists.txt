cmake_minimum_required(VERSION 3.15)

project(CPURaytracer VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set_property(GLOBAL PROPERTY PREDEFINED_TARGETS_FOLDER "")

add_subdirectory(3rdparty)
add_subdirectory(src)