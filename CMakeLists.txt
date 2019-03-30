cmake_minimum_required(VERSION 3.13)
project(QTUebung)


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES ../src/main.cpp ../src/spiel.cpp)
find_package(Qt5Widgets REQUIRED)

add_executable(QTUebung ${SOURCE_FILES})

target_link_libraries(QTUebung Qt5::Widgets)