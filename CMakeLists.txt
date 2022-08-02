cmake_minimum_required(VERSION 3.22)
project(cycles C)

set(CMAKE_C_STANDARD 11)

add_executable(cycles main.c switch_test.c cycles_test.c make_triangle.c arrays.c strings.c structs.c files.c cmake-build-debug/memory.c c_hw03.c)
target_link_libraries(cycles m)

