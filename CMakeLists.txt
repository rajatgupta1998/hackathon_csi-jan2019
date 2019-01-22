cmake_minimum_required(VERSION 3.13)
project(csi_hackathon)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(csi_hackathon
        database.cpp
        README.md)
