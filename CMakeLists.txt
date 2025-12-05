cmake_minimum_required(VERSION 3.22.1)
project(playground CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Save intermediate files (preprocessed, assembly, object files)
add_compile_options(-Wall -Wextra -Werror -save-temps=obj)

if (TARGET_HOST)
    add_compile_definitions(TARGET_HOST)
endif()

# Generate verbose output to see all compilation commands
set(CMAKE_VERBOSE_MAKEFILE ON)

# Build your main code
add_subdirectory(code)

# Google Test setup
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Enable testing and delegate test target creation to the `test/` subdirectory.
enable_testing()

# Add the `test` subdirectory which contains the test CMake logic
# (it will create the `playground_tests` target and register tests).
add_subdirectory(test)