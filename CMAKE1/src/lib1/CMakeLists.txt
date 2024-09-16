add_library(Lib1 STATIC lib1.cpp)
target_include_directories(Lib1 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../../include)