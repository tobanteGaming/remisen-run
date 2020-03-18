cmake_minimum_required(VERSION 3.13)
project(Giovanni)

option(GIO_GIT_SUBMODULE "Check submodules during build" ON)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")
include(GioGitSubmodules)

add_subdirectory(3rd_party/SFML EXCLUDE_FROM_ALL)
add_subdirectory(giovanni)