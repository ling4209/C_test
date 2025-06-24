cmake_minimum_required(VERSION 3.10)
project(C_test)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

include_directories(include)
add_executable(C_test
    main.c
    utils.c
)
# 添加MSVC编译选项
if(MSVC)
    target_compile_options(C_test PRIVATE "/utf-8")
endif()