cmake_minimum_required(VERSION 3.5)
project(bitcount)

set(CMAKE_C_STANDARD 90)

set(SOURCE_FILES main.c)
add_executable(bitcount ${SOURCE_FILES})