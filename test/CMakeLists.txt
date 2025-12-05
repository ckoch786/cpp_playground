# Gather all test sources under the `test/` tree and build them into
# the `playground_tests` executable so tests in subdirectories are
# compiled and discovered by CTest.
file(GLOB_RECURSE TEST_SOURCES CONFIGURE_DEPENDS
    ${CMAKE_SOURCE_DIR}/test/*.cpp
)

add_executable(playground_tests ${TEST_SOURCES})

# Link with your code library and gtest
target_link_libraries(playground_tests
    playground_lib  # From code/CMakeLists.txt
    gtest
    gmock
)

# Make code headers available to tests
target_include_directories(playground_tests PRIVATE
    ${CMAKE_SOURCE_DIR}/code
)

# Register tests with CTest
include(GoogleTest)
gtest_discover_tests(playground_tests)