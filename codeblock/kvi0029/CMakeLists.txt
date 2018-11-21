cmake_minimum_required(VERSION 3.8)
project(kvi0029)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp funkce.h funkce.cpp out.h out.cpp calculation.cpp calcilation.h)
add_executable(kvi0029 ${SOURCE_FILES})
