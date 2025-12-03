add_subdirectory(app)
add_subdirectory(drivers)
add_subdirectory(middleware)

add_executable(playground
    app/main.cpp
)

set_target_properties(playground PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}
)

target_link_libraries(playground 
    app_lib
    middleware_lib
    drivers_lib
)