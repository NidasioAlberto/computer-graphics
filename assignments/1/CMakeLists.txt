cmake_minimum_required(VERSION 3.10)

project(Assignment_1)

find_package(glm CONFIG REQUIRED)

add_executable(a01 A01.cpp)
target_include_directories(a01 PUBLIC headers)
target_link_libraries(a01 PRIVATE glfw vulkan dl pthread X11 Xrandr glm::glm)
