cmake_minimum_required(VERSION 3.15)
project(App CXX)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(example src/example.cpp)
target_link_libraries(example ${CONAN_LIBS})
