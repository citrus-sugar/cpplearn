cmake_minimum_required(VERSION 3.2.0)

project(main)

set(DCMAKE_BUILD_TYPE "Debug")

add_library(log_library STATIC
    src/log.cpp
)

target_include_directories(log_library
    PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)



add_executable(main 
    src/main.cpp
)

target_link_libraries(main 
    PRIVATE
        log_library
)

