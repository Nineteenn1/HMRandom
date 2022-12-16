cmake_minimum_required(VERSION 3.10)
project(HMRandom)

option(BUILD_DEMO OFF)

add_subdirectory(random/)

if(BUILD_DEMO)
    add_subdirectory(demo/)
endif(BUILD_DEMO)

