cmake_minimum_required(VERSION 3.10.0)
project(testc VERSION 0.1.0 LANGUAGES C CXX)

find_package(fmt)

include_directories(${fmt_include_dirs})

add_executable(testc main.cpp)

# Test Cmake static lib 
# add_library(hello_lib hello.cpp)

# 动态库似乎无法步入函数调试，这点有点可惜
add_library(hello_lib SHARED  hello.cpp)

target_link_libraries(testc fmt::fmt hello_lib)
