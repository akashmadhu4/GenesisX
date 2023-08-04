# CMakeLists.txt

cmake_minimum_required(VERSION 3.12)
project(GenesisX)

set(CMAKE_CXX_STANDARD 17)



file(GLOB SRC_FILES "src/*.cpp")



add_library(GenesisX SHARED ${SRC_FILES})

message("CMAKE_CURRENT_SOURCE_DIR:${CMAKE_CURRENT_SOURCE_DIR}")

target_include_directories(GenesisX PRIVATE 
    ${CMAKE_CURRENT_SOURCE_DIR}/src
    ${CMAKE_CURRENT_SOURCE_DIR}/include
 )


target_link_libraries(GenesisX PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/lib/spdlog/build/libspdlog.a)




