cmake_minimum_required(VERSION 3.20)
project(run_dll)
set(CMAKE_CXX_STANDARD 11)

# 递归目录获取所有c文件
file(GLOB_RECURSE c_files  *.cpp *.c)
# 链接目录添加 lib 输出文件夹
link_directories(${LIB_OUT_PATH})

add_executable(run_dll ${c_files})
target_link_libraries(run_dll lib)