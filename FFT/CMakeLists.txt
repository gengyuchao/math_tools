

cmake_minimum_required(VERSION 3.12)

project(FFT_test)

set(CMAKE_BUILD_TYPE    "Debug")

#指定C语言版本
set(CMAKE_C_COMPILER   "gcc")
set(CMAKE_CXX_COMPILER "g++")

# 链接 math
set(CMAKE_C_FLAGS      "-Wall -Wextra -Werror -std=c99")
set(CMAKE_CXX_FLAGS   "-Wall -Wextra -Werror -std=c++11")



set(src "FFT.c" "fft_example.c")
set(include .)

include_directories(${include})
add_executable(FFT_test ${src})

# Libraries to link
target_link_libraries(${PROJECT_NAME} m) # m是math库
