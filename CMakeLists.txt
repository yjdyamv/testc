cmake_minimum_required(VERSION 3.10.0)
project(testc VERSION 0.1.0 LANGUAGES C CXX)

add_executable(testc main.cpp)

# Test Cmake static lib 
# add_library(hello_lib hello.cpp)

# Test Cmake shared lib: In this time, and using windows-x86-64-gnu, I cont not step into(F11) shared lib function to debug with codelldb until I set a brikpoint in the shared lib function. It just performed like stepping over. And if I use gdb (Microsoft C/C++ or Native Debug), I can step into the shared lib function.
# And in linux, I can step into the shared lib function directly for not only gdb but also lldb.
add_library(hello_lib SHARED hello.cpp)

target_link_libraries(testc hello_lib)
