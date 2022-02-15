cmake_minimum_required(VERSION 3.20)
project(add)
set(CMAKE_CXX_STANDARD 11)

# # set(OpenCV_DIR "E:/SDK/opencv/4.5.4_static/x64")
# set(OpenCV_DIR "E:/SDK/opencv/4.5.4_static/opencv-mobile-4.5.4-windows-vs2017/x64")
# find_package(OpenCV REQUIRED)

#递归目录获取所有c文件
file(GLOB_RECURSE c_files  *.cpp *.c)

#生成动态库
# 第一个参数为你需要构建的dll的名字，第二个为类型，第三个为 cpp 文件
add_library(lib_shared  SHARED ${c_files})
# 将动态库名字设为add
set_target_properties(lib_shared PROPERTIES OUTPUT_NAME "lib")
set_target_properties(lib_shared PROPERTIES VERSION 1.0 SOVERSION 1)