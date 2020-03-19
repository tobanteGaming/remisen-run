project(remisen-run)

# library
set(remisen-run_library_sources
    src/game.hpp
    src/game.cpp
)
source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${remisen-run_library_sources})
add_library(${PROJECT_NAME} ${remisen-run_library_sources})
add_library(RemisenRun::RemisenRun ALIAS ${PROJECT_NAME})
target_include_directories(${PROJECT_NAME} PUBLIC ${SFML_INCLUDE_DIR})
target_link_libraries(${PROJECT_NAME} 
    PUBLIC 
        sfml-audio 
        sfml-graphics
    PRIVATE
        RemisenRun::CodeCoverage
)

# executable
set(remisen-run_desktop_sources
    src/main.cpp
)
source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${remisen-run_desktop_sources})
add_executable(remisen-run-desktop ${remisen-run_desktop_sources})
target_link_libraries(remisen-run-desktop PRIVATE RemisenRun::RemisenRun)

# tests
set (remisen-run_test_src
    src/main_test.cpp
    src/game_test.cpp
)
source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${remisen-run_test_src})
add_executable(remisen-run_tests ${remisen-run_test_src})
target_link_libraries(remisen-run_tests 
    PRIVATE
        RemisenRun::RemisenRun
        RemisenRun::CodeCoverage
        Catch2::Catch2
)
catch_discover_tests(remisen-run_tests)