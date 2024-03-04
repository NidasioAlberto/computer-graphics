cmake_minimum_required(VERSION 3.10)

project(Assignment_3)

find_package(glm CONFIG REQUIRED)

add_executable(a03 A03.cpp)
target_include_directories(a03 PUBLIC headers)
target_link_libraries(a03 PRIVATE glfw vulkan dl pthread X11 Xrandr glm::glm)
