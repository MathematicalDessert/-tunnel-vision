# Core CMake File
file(GLOB_RECURSE SOURCE_FILES *.cpp)

# Set include directory
include_directories(include)

add_library(core ${SOURCE_FILES})
target_include_directories(core PUBLIC include)
target_link_libraries(core LibDataChannel::LibDataChannelStatic)