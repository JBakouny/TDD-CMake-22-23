cmake_minimum_required(VERSION 3.10)

project(TDD VERSION 1.0)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        03597a01ee50ed33e9dfd640b249b4be3799d395 # release-1.10.0
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_subdirectory(Matrix)

enable_testing()

add_executable(TDD main.cpp)

target_link_libraries(TDD PUBLIC Matrix GTest::gtest_main)

target_include_directories(TDD PUBLIC
                          "${PROJECT_SOURCE_DIR}/Matrix"
                          )

include(GoogleTest)
gtest_discover_tests(TDD)
