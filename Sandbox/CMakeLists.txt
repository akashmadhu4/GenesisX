# CMakeLists.txt

cmake_minimum_required(VERSION 3.12)
project(Sandbox)

set(CMAKE_CXX_STANDARD 11)

# Add your application's source files
file(GLOB SOURCE_FILES "src/*.cpp")


# Create the executable and link against the dynamic library
add_executable(Sandbox ${SOURCE_FILES})

target_include_directories(Sandbox PRIVATE /Users/akashmadhu/dev/GenesisX/src)
target_link_libraries(Sandbox PUBLIC "/Users/akashmadhu/dev/GenesisX/build/libGenesisX.dylib") # Replace with the actual path to libMyLibrary.dylib
