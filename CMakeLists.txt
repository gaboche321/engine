cmake_minimum_required(VERSION 3.10.2)

project(engile)
set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)


find_package(SDL2 REQUIRED)
find_package(GLEW REQUIRED)
find_package(OpenGL REQUIRED)

include_directories(${SDL2_INCLUDE_DIR} include glm ${GLEW_INCLUDE_DIRECTORIES})

file(GLOB SOURCES "src/*.cpp")

add_executable(engine ${SOURCES})
target_link_libraries(engine ${SDL2_LIBRARIES} GLEW::GLEW ${OPENGL_LIBRARIES})



