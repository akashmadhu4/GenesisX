# CMakeLists.txt

cmake_minimum_required(VERSION 3.12)
project(GenesisX)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g")


file(GLOB SRC_FILES "src/*.cpp" ; "src/Platform/Mac/*.cpp")

find_library(COCOA_LIBRARY Cocoa)
find_library(IOKIT_LIBRARY IOKit)

add_library(GenesisX SHARED ${SRC_FILES})

target_precompile_headers(GenesisX PUBLIC "src/pch.h")


target_include_directories(GenesisX PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}/src
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/spdlog/include
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/GLFW/include
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/glad/include 
 )

target_link_libraries(GenesisX PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/lib/GLFW/build/src/libglfw3.a ${COCOA_LIBRARY} ${IOKIT_LIBRARY} "-framework OpenGL")
target_link_libraries(GenesisX PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/lib/spdlog/build/libspdlog.a )
target_link_libraries(GenesisX PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/lib/glad/build/libGlad.a )



