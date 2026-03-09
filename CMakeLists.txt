cmake_minimum_required(VERSION 3.2)

project(mathlib LANGUAGES CXX)

add_library(mathlib INTERFACE)

target_include_directories(mathlib INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
