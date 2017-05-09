cmake_minimum_required(VERSION 3.5) # I think

project(snes C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_COMPILER clang)
#set(CMAKE_CXX_EXTENSIONS OFF)


file(GLOB_RECURSE sources src/*.c src/*.h)

add_executable(snes ${sources})

target_compile_options(snes PUBLIC -std=gnu11 -Wall)

target_include_directories(snes PUBLIC src/inc/)


