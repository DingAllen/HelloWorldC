cmake_minimum_required(VERSION 3.21)
project(dlltest C)

set(CMAKE_C_STANDARD 11)

add_library(dlltest SHARED subtract.c)
