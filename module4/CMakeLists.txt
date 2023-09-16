cmake_minimum_required(VERSION 3.16.0)

project(Calculator_Project VERSION 1.0.0)

add_library(my_math
	add.cpp
	div.cpp)

add_library(my_print
	resultprint.cpp)

add_executable(calculator 
	main.cpp)

target_link_libraries(calculator my_math my_print)
