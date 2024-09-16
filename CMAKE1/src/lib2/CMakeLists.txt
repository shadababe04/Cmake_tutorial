add_library(Lib2 STATIC lib2.cpp)
target_include_directories(Lib2 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../../include)