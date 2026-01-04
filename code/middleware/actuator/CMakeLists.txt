# TODO not sure about how to handle using the actuator interface.
add_library(actuator_lib
    src/actuator.cpp
    cfg/actuator_cfg.cpp
)

target_link_libraries(actuator_lib
    interfaces_lib
    drivers_lib
)

target_include_directories(actuator_lib PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)