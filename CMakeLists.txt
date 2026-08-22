cmake_minimum_required(VERSION 4.2.0)

project(QuartzEngine VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_INCLUDE_CURRENT_DIR TRUE)

# BUILD INFO
string(TIMESTAMP QUARTZ_BUILD_DATE "%Y-%m-%d")
string(TIMESTAMP QUARTZ_BUILD_YEAR "%Y")
string(SUBSTRING ${QUARTZ_BUILD_YEAR} 2 2 QUARTZ_BUILD_YEAR)
string(TIMESTAMP QUARTZ_BUILD_ID "%m%d.%H%M%S")
string(PREPEND QUARTZ_BUILD_ID ${QUARTZ_BUILD_YEAR})

# CONFIG
set(QUARTZ_CONFIG_PRINT_HEADER true)

configure_file(Source/build.h.in build.h)
configure_file(Source/config.h.in config.h)

add_executable(QuartzEngine Source/main.cpp)