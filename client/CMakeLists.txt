# Windows Client File
file(GLOB_RECURSE SOURCE_FILES *.cpp)

add_executable(client ${SOURCE_FILES})
target_link_libraries(client core)