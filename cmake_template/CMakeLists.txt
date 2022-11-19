cmake_minimum_required(VERSION 3.23)

project(out)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_BUILD_TYPE "Release")

aux_source_directory(. SOURCE)

add_subdirectory(dory)
add_subdirectory(marlin)
add_subdirectory(nemo)

add_executable(out ${SOURCE})

# 添加链接库
target_link_libraries(out dory marlin nemo)