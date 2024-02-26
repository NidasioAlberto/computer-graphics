cmake_minimum_required(VERSION 3.10)

project(Assignment_2)

find_package(glm CONFIG REQUIRED)

add_executable(a02 A02.cpp)
target_include_directories(a02 PUBLIC headers)
target_link_libraries(a02 PRIVATE glfw vulkan dl pthread X11 Xrandr glm::glm)
