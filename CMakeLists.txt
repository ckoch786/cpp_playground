cmake_minimum_required(VERSION 3.22.1)
project(weather_station CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_compile_options(-Wall -Wextra -Werror)

if (TARGET_HOST)
    add_compile_definitions(TARGET_HOST)
endif()

add_subdirectory(code)