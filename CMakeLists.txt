cmake_minimum_required(VERSION 3.10)

project(TDD VERSION 1.0)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(Matrix)

add_executable(TDD main.cpp)

target_link_libraries(TDD PUBLIC Matrix)

target_include_directories(TDD PUBLIC
                          "${PROJECT_SOURCE_DIR}/Matrix"
                          )

