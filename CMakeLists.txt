cmake_minimum_required(VERSION 3.20)
project(tuhi)

set(CMAKE_C_STANDARD 17)

include(CTest)
include(GoogleTest)
enable_testing()

add_subdirectory(vendor)
add_subdirectory(src)
add_subdirectory(tests)
