cmake_minimum_required(VERSION 3.22.1)
project(calc VERSION 1.0.0)

add_library(
    calculator SHARED
    calculator.cpp
)

add_executable(calc teste.cpp)

target_link_libraries(calc PUBLIC calculator)
