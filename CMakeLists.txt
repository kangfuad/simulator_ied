cmake_minimum_required(VERSION 3.10)
project(ied_simulator C)

# Set C standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_VERBOSE_MAKEFILE ON)

# Debug: Print directory information
message(STATUS "CMAKE_CURRENT_BINARY_DIR: ${CMAKE_CURRENT_BINARY_DIR}")
message(STATUS "CMAKE_CURRENT_SOURCE_DIR: ${CMAKE_CURRENT_SOURCE_DIR}")

# Find libiec61850
find_library(IEC61850_LIBRARY
    NAMES iec61850 libiec61850
    PATHS /usr/local/lib
    REQUIRED
)

# Find headers
find_path(IEC61850_INCLUDE_DIR
    NAMES libiec61850/iec61850_server.h
    PATHS /usr/local/include
    REQUIRED
)

# Add include directories for the build
include_directories(
    ${CMAKE_CURRENT_BINARY_DIR}
    ${IEC61850_INCLUDE_DIR}
    /usr/local/include
)

# Add executable
add_executable(ied_simulator 
    src/ied_simulator.c
    ${CMAKE_CURRENT_BINARY_DIR}/static_model.c
)

# Set target include directories
target_include_directories(ied_simulator PRIVATE
    ${CMAKE_CURRENT_BINARY_DIR}
    ${IEC61850_INCLUDE_DIR}
    /usr/local/include
)

# Link libraries
target_link_libraries(ied_simulator PRIVATE
    ${IEC61850_LIBRARY}
    pthread
    m
)

# Set compile flags
target_compile_options(ied_simulator PRIVATE
    -Wall
    -Wextra
    -g
)

# Debug: Print final information
message(STATUS "Build type: ${CMAKE_BUILD_TYPE}")
message(STATUS "IEC61850 library: ${IEC61850_LIBRARY}")
message(STATUS "IEC61850 include dir: ${IEC61850_INCLUDE_DIR}")