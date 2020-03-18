cmake_minimum_required(VERSION 3.13)
project(GiovanniGame)

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
    # Optionally set things like CMAKE_CXX_STANDARD, CMAKE_POSITION_INDEPENDENT_CODE her
    # Let's ensure -std=c++xx instead of -std=g++xx
    set(CMAKE_CXX_STANDARD 17)
    set(CMAKE_CXX_EXTENSIONS OFF)
    set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
    set(BUILD_SHARED_LIBS OFF)
    # Let's nicely support folders in IDE's
    set_property(GLOBAL PROPERTY USE_FOLDERS ON)
    # lto
    include(CheckIPOSupported)
    check_ipo_supported(RESULT GIO_SUPPORTS_LTO)
    if(GIO_SUPPORTS_LTO)
      message(STATUS "Giovanni: lto is supported, but NOT enabled.")
      # set(CMAKE_INTERPROCEDURAL_OPTIMIZATION TRUE)
    else()
      message(STATUS "Giovanni: lto is NOT supported.")
    endif()
endif()

option(GIO_BUILD_TESTS      "Build unit tests" ON)
option(GIO_BUILD_COVERAGE   "Build unit tests" OFF)
option(GIO_GIT_SUBMODULE    "Check submodules during build" ON)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")
include(GioCodeCoverage)
include(GioGitSubmodules)

if(GIO_BUILD_TESTS)
  list (APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/3rd_party/Catch2/contrib")
  enable_testing()
  add_subdirectory(3rd_party/Catch2 EXCLUDE_FROM_ALL)
  include(CTest)
  include(Catch)
endif()

add_subdirectory(3rd_party/SFML EXCLUDE_FROM_ALL)
add_subdirectory(giovanni)