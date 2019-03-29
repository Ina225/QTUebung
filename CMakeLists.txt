cmake_minimum_required(VERSION 3.13)
project(QTTest)


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
find_package(Qt5Widgets REQUIRED)

add_executable(QTTest ${SOURCE_FILES})

target_link_libraries(QTTest Qt5::Widgets)