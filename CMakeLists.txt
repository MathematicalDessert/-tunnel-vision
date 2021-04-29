# Root CMake File
cmake_minimum_required(VERSION 3.10)

# Project
project(tunnel-vision VERSION 0.1.0 LANGUAGES CXX)

# Set C++ Standard
set(CMAKE_CXX_STANDARD 17)

# Add libdatachannel
add_subdirectory(libdatachannel)


include_directories(include)

# Build core
file(GLOB_RECURSE CORE_SOURCE_FILES CONFIGURE_DEPENDS lib/*.cpp)

add_library(core ${CORE_SOURCE_FILES})
target_link_libraries(core LibDataChannel::LibDataChannelStatic)

# Build client
file(GLOB_RECURSE CLIENT_SOURCE_FILES CONFIGURE_DEPENDS client/*.cpp)

add_executable(tunnel-vision ${CLIENT_SOURCE_FILES})
target_link_libraries(tunnel-vision core)