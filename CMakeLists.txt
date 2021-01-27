cmake_minimum_required(VERSION 3.0)
project(GTAQuat)

add_definitions("-std=c++11")

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(GTAQuat src/GTAQuat.hpp src/GTAQuat.cpp src/main.cpp)
target_link_libraries(GTAQuat ${CONAN_LIBS})