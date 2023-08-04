# CMakeLists.txt

cmake_minimum_required(VERSION 3.12)
project(Sandbox)

set(CMAKE_CXX_STANDARD 11)



file(GLOB SOURCE_FILES "src/*.cpp")



add_executable(Sandbox ${SOURCE_FILES})

message("CMAKE_CURRENT_SOURCE_DIR:${CMAKE_CURRENT_SOURCE_DIR}")

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../GenesisX/include)

target_link_libraries(Sandbox PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../GenesisX/build/libGenesisX.dylib)
