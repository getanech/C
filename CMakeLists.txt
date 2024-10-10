cmake_minimum_required(VERSION 3.24)
project(cLion C)

set(CMAKE_C_STANDARD 11)

add_library(cLion library.c targil1.c targil2.c targil1.cpp targil1.h tt.c)
