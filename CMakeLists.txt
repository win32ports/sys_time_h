cmake_minimum_required(VERSION 2.8)

project(sys_time_h LANGUAGES C)

add_executable(example example.c sys/time.h)

target_include_directories(example PRIVATE ${CMAKE_SOURCE_DIR})
if(MSVC)
  target_compile_options(example PRIVATE /W4 /WX)
else(MSVC)
  target_compile_options(example PRIVATE -Wall -Wextra -Wpedantic -Werror)
endif(MSVC)
