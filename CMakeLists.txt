cmake_minimum_required(VERSION 3.0)

set(PROJ_NAME sample_yocto)
project(${PROJ_NAME})



# file(GLOB_RECURSE sources ./test_ObsDesign.cpp ./main/*.h)

file(GLOB SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/*.h
    ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)


# add the data to the target, so it becomes visible in some IDE
add_executable(${PROJ_NAME} ${SOURCES})

# just for example add some compiler flags
target_compile_options(${PROJ_NAME}  PUBLIC -std=c++17 -Wall -Wfloat-conversion)