cmake_minimum_required(VERSION 3.14.5)
project(helloProject
    VERSION 1.0
    DESCRIPTION "A simple hello world project"
    LANGUAGES CXX
)

add_executable(executableHello hello.cpp)

