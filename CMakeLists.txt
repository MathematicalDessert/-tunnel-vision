# Root CMake File
cmake_minimum_required(VERSION 3.10)

# Project
project(tunnel-vision VERSION 0.1.0 LANGUAGES CXX)

# Set C++ Standard
set(CXX_STANDARD 17)

# Add subdictories
add_subdirectory(core)
add_subdirectory(client)
add_subdirectory(libdatachannel)