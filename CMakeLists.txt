cmake_minimum_required(VERSION 3.21)
#set(CMAKE_GENERATOR "Ninja")
#set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_C_STANDARD 11)
#set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -O0")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -O0")

project(STM_CMAKE_EXAMPLE)

message("CMAKE_CROSSCOMPILING is set to ${CMAKE_CROSSCOMPILING}")
if( CMAKE_CROSSCOMPILING ) # True when CMAKE_TOOLCHAIN_FILE specified
    SET(BUILD_TESTING OFF CACHE STRING "")
else()
    SET(BUILD_TESTING ON CACHE STRING "")
endif()

message("BUILD_TESTING is set to ${BUILD_TESTING}")
if( ${BUILD_TESTING} STREQUAL "ON" )
    include(CTest)
    set(INSTALL_GTEST OFF)
    add_subdirectory(googletest)
endif()

add_subdirectory(firmware)
