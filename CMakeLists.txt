cmake_minimum_required(VERSION 3.13)
project(Test)

set(CMAKE_CXX_STANDARD 14)

#头文件目录
include_directories(Project_DIR/Header)

#链接
add_executable(Test main.cpp Project_DIR/Source/IamAClass.cpp)

#为项目引入测试功能
add_subdirectory(Test_DIR)