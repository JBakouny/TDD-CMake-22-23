# CMake Commands

## Configure when you change CMakeLists.txt:
`
cmake -S . -B build
`
## Compile whe=n you change code:
`
cmake --build build
`

## Run Tests
`
(cd build && ctest) 
`


### Useful links
https://cmake.org/cmake/help/latest/guide/tutorial/A%20Basic%20Starting%20Point.html
https://cmake.org/cmake/help/latest/guide/tutorial/Adding%20a%20Library.html#exercise-1-creating-a-library

https://google.github.io/googletest/quickstart-cmake.html