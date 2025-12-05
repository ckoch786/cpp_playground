add_subdirectory(app)
add_subdirectory(drivers)
add_subdirectory(middleware)

# Create a combined library that tests can link against
add_library(playground_lib INTERFACE)
target_link_libraries(playground_lib INTERFACE
    app_lib
    middleware_lib
    drivers_lib
)

# Main executable
add_executable(playground
    app/main.cpp
)

set_target_properties(playground PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}
)

target_link_libraries(playground 
    playground_lib
)