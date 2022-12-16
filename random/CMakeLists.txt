project(Random)

file(GLOB_RECURSE HMRANDOM_SOURCES src/*.cpp include/*.h)

add_library(${PROJECT_NAME} STATIC ${HMRANDOM_SOURCES})