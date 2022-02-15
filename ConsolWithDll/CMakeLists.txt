cmake_minimum_required(VERSION 3.20)
project(cvlib)

set(CMAKE_CXX_FLAGS "-std=c++11 -g3 -rdynamic")
set(CMAKE_CXX_FLAGS_DEBUG "-O0")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -DNDEBUG")

#打印信息
message(STATUS "build type:")
message(STATUS "CXX_FLAGS = ${CMAKE_CXX_FLAGS} ")


# 设置变量
set(LIB_OUT_PATH ${PROJECT_BINARY_DIR}/out) # 库文件输出目录
set(EXE_OUT_PATH ${PROJECT_BINARY_DIR}/out) # exe 输出目录

# 引用库
# # set(OpenCV_DIR "E:/SDK/opencv/4.5.4_static/x64")
# set(OpenCV_DIR "E:/SDK/opencv/4.5.4_static/opencv-mobile-4.5.4-windows-vs2017/x64")
# find_package(OpenCV REQUIRED)

#设置库文件输出目录
set(LIBRARY_OUTPUT_PATH ${LIB_OUT_PATH})
set(EXECUTABLE_OUTPUT_PATH ${EXE_OUT_PATH})


#递归目录获取所有h文件
include_directories(${PROJECT_SOURCE_DIR}/source/lib)
# include_directories(${PROJECT_SOURCE_DIR}/source/lib2)
include_directories(${PROJECT_SOURCE_DIR}/source/run_dll)


# 声明引入子项目(目录)
add_subdirectory(source/lib)
add_subdirectory(source/run_dll)

#cmake中执行shell指令
execute_process(COMMAND pwd)