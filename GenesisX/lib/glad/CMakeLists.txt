cmake_minimum_required(VERSION 3.12)
project(Glad)

file(GLOB SRC_FILES "src/*.c")

add_library(Glad STATIC ${SRC_FILES})


include_directories(Glad PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}/include
 )