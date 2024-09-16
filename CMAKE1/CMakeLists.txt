cmake_minimum_required(VERSION 3.5)

project(main)

add_subdirectory(src)

add_executable(test main.cpp)

target_link_libraries(test PRIVATE Lib1)
target_link_libraries(test PRIVATE Lib2)
