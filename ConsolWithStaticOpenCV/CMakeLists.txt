cmake_minimum_required(VERSION 3.20)
project(hello)
set(CMAKE_CXX_STANDARD 11)

# set(OpenCV_DIR "E:/SDK/opencv/4.5.4_static/x64")
set(OpenCV_DIR "E:/SDK/opencv/4.5.4_static/opencv-mobile-4.5.4-windows-vs2017/x64")
find_package(OpenCV REQUIRED)

add_executable(hello main.cpp)
target_link_libraries(hello ${OpenCV_LIBS})