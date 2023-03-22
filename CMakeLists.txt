cmake_minimum_required(VERSION 2.8)

project(sys_time_h LANGUAGES C)

add_executable(example example.c sys/time.h)

target_include_directories(example PRIVATE ${CMAKE_SOURCE_DIR})
target_compile_options(example PRIVATE
  $<$<CXX_COMPILER_ID:MSVC>:/W4 /WX>
  $<$<NOT:$<CXX_COMPILER_ID:MSVC>>:-Wall -Wextra -Wpedantic -Werror>)
