cmake_minimum_required(VERSION 3.10)

configure_file(config.h.in ${CMAKE_CURRENT_SOURCE_DIR}/config.h)
include_directories(${PROJECT_BINARY_BIN})
project(SchizoLog VERSION 1.0.0)

add_executable(schizolog src/main.c)
target_include_directories(schizolog PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
