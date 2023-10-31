cmake_minimum_required(VERSION 3.26)
project(CI_test)

option(CI_TEST_BUILD_TESTS "Build tests" ON)

set(CMAKE_CXX_STANDARD 17)

# header-only library
add_library(testingLib INTERFACE
        "${CMAKE_SOURCE_DIR}/include/Person.hpp"
        "${CMAKE_SOURCE_DIR}/include/Vector3.hpp"
)
target_include_directories(testingLib INTERFACE "${CMAKE_SOURCE_DIR}/include")

# ============================
# Testing
# ============================

if (CI_TEST_BUILD_TESTS)

    # Download Catch2 unit-test framework from GitHub
    include(FetchContent)
    FetchContent_Declare(
            Catch2
            GIT_REPOSITORY https://github.com/catchorg/Catch2.git
            GIT_TAG v3.4.0
    )
    FetchContent_MakeAvailable(Catch2)

    enable_testing()
    add_subdirectory(tests)

endif ()