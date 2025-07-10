cmake_minimum_required(VERSION 3.15)
project(omega)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB SOURCES src/*.cpp)
add_executable(${PROJECT_NAME} ${SOURCES})

add_subdirectory(src/lexer)
target_link_libraries(LEXER)

