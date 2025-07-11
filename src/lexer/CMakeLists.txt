cmake_minimum_required(VERSION 3.15)
project(LEXER VERSION 1.0)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

file(GLOB LEXER_SOURCES src/*.cpp)

add_library(${PROJECT_NAME} STATIC ${LEXER_SOURCES})
target_include_directories(${PROJECT_NAME} INTERFACE include)