cmake_minimum_required(VERSION 3.15)
project(lib CXX)

add_library(lib src/lib.cpp)

set_target_properties(lib PROPERTIES PUBLIC_HEADER "src/lib.h")
install(TARGETS lib DESTINATION "."
        PUBLIC_HEADER DESTINATION include
        RUNTIME DESTINATION bin
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
        )
