cmake_minimum_required(VERSION 3.26)
project(my_project VERSION 0.1.0 LANGUAGES CXX)

# Use lld linker.
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -fuse-ld=lld")
set(CMAKE_MODULE_LINKER_FLAGS "${CMAKE_MODULE_LINKER_FLAGS} -fuse-ld=lld")
set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -fuse-ld=lld")

# Sources.
add_subdirectory(src)
add_subdirectory(test)
