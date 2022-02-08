cmake_minimum_required(VERSION 3.21)
project(staticlibtest C)

set(CMAKE_C_STANDARD 11)

add_library(staticlibtest add.c)
