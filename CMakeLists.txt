cmake_minimum_required(VERSION 3.10)

project(TaskManager)

set(CMAKE_CXX_STANDARD 11)

# Ajouter les chemins d'inclusion
include_directories(include)

add_executable(task_manager src/task.cpp src/main.cpp test/test_main.cpp)