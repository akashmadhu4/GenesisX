# CMakeLists.txt

cmake_minimum_required(VERSION 3.12)
project(GenesisX)

set(CMAKE_CXX_STANDARD 17)

# Add the source files from the src directory
file(GLOB SRC_FILES "src/GenesisX/*.cpp")

# Create the shared library
add_library(GenesisX SHARED ${SRC_FILES})

# Include the directory containing the library headers (if any)
target_include_directories(GenesisX PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)
