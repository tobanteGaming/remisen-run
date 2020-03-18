project(giovanni-desktop)

set(giovanni_desktop_sources
    src/main.cpp
)
add_executable(${PROJECT_NAME} ${giovanni_desktop_sources})
target_include_directories(${PROJECT_NAME} PRIVATE ${SFML_INCLUDE_DIR})
target_link_libraries(${PROJECT_NAME} PRIVATE sfml-audio sfml-graphics)
