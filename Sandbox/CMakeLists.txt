# CMakeLists.txt

cmake_minimum_required(VERSION 3.12)
project(Sandbox)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g")

file(GLOB SOURCE_FILES "src/*.cpp")



add_executable(Sandbox ${SOURCE_FILES})


message("CMAKE_CURRENT_SOURCE_DIR:${CMAKE_CURRENT_SOURCE_DIR}")

include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}/../GenesisX/include
        ${CMAKE_CURRENT_SOURCE_DIR}/../GenesisX/lib/spdlog/include
)

target_link_libraries(Sandbox PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../GenesisX/build/libGenesisX.dylib)
