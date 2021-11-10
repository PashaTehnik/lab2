cmake_minimum_required(VERSION 3.20)
project(untitled2)
set(CMAKE_CXX_STANDARD 14)

include(FetchContent)
FetchContent_Declare(
        googletest
        # Specify the commit you depend on and update it regularly.
        URL https://github.com/google/googletest/archive/refs/tags/release-1.11.0.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()


#include_directories(${PROJECT_SOURCE_DIR}/CMakeProject2)

add_executable (CMakeTest "CMakeTest.cpp")

target_link_libraries(CMakeTest gtest_main)

# Extra linking for the project.
target_link_libraries(CMakeTest string_times)