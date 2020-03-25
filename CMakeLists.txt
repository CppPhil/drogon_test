cmake_minimun_required(VERSION 3.15 FATAL_ERROR)

project(drogon_test_project VERSION 1.0.0)

string(APPEND CMAKE_CXX_FLAGS " -Werror -Wall -Wextra -Wcast-align -Wcast-qual -Wmissing-field-initializers -Wmissing-include-dirs -Wpointer-arith -Wstack-protector -Wstrict-aliasing=2 -Wunreachable-code -Wlogical-op -Wduplicated-cond -Wnull-dereference -Wno-unused-parameter")
string(APPEND CMAKE_CXX_FLAGS_DEBUG " -g -O0")
string(APPEND CMAKE_CXX_FLAGS_RELEASE " -O3 -march=native -funroll-loops -flto -fwhole-program -DNDEBUG")

set(CMAKE_CXX_STANDARD          17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS        OFF)

find_package(Threads REQUIRED)

add_subdirectory(external/drogon)

set(APP_NAME drogon_test_app)

set(
    APP_HEADERS
   )

set(
    APP_SOURCES
   )

add_executable(
    ${APP_NAME}
    ${APP_HEADERS}
    ${APP_SOURCES}
)

target_link_libraries(
    ${APP_NAME}
    PRIVATE
    Threads::Threads
    drogon
)

