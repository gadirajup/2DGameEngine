cmake_minimum_required(VERSION 3.7)

add_definitions(-std=c++17)

set(CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS, "${CXX_FLAGS}")

project(2DGameEngine)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")

find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS} src)
include_directories(${SDL2_INCLUDE_DIRS} ${SDL2_IMAGE_INCLUDE_DIRS})
include_directories(src/ecs)

add_executable(
    GameEngine 
    src/main.cpp 
    src/game.cpp 
    src/timer.cpp
    src/texture_manager.cpp
    src/game_object.cpp
    src/map.cpp
    src/vector2d.cpp
    src/collision.cpp)

file(COPY assets DESTINATION ${CMAKE_BINARY_DIR})
string(STRIP ${SDL2_LIBRARIES} SDL2_LIBRARIES)
target_link_libraries(GameEngine ${SDL2_LIBRARIES})
target_link_libraries(GameEngine ${SDL2_IMAGE_LIBRARIES})