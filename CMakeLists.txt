# Buffer Overflow Examples
# Author: Steve Matsumoto <stephanos.matsumoto@sporic.me>

# Preamble
cmake_minimum_required(VERSION 3.16)
project(buffer-overflow-example)

# Project-wide setup
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_FLAGS "-Wall -Wextra -pedantic -g")
string(APPEND CMAKE_C_FLAGS " -Wno-deprecated-declarations")
string(APPEND CMAKE_C_FLAGS " -Wno-parentheses")
string(APPEND CMAKE_C_FLAGS " -fno-stack-protector")
string(APPEND CMAKE_C_FLAGS " -fno-sanitize=all")
string(APPEND CMAKE_C_FLAGS " -z execstack")
string(APPEND CMAKE_C_FLAGS " -static")
string(APPEND CMAKE_C_FLAGS " -no-pie")

# Project targets
add_subdirectory(src)
