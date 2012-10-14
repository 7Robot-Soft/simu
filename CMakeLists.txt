# http://qt-project.org/quarterly/view/using_cmake_to_build_qt_projects
# http://qt-quarterly.developpez.com/qq-34/cmake/

cmake_minimum_required(VERSION 2.6.0)

project(Simu)

#add_subdirectory(Box2D_v2.2.1)
#include_directories(${Box2D_SOURCE_DIR})

set(LIBRARY_OUTPUT_PATH lib/${CMAKE_BUILD_TYPE})

include_directories(include visu)
link_directories(visu/lib/${CMAKE_BUILD_TYPE})


file(GLOB sources "*.cpp")
file(GLOB iacomm_sources "iacomm/*.cpp")
file(GLOB scenebuilder_sources "scenebuilder/*.cpp")
file(GLOB simu_sources "simu/*.cpp")

include_directories(${CMAKE_CURRENT_BINARY_DIR})
include_directories(.)





add_executable(simulator
    ${sources}
    ${iacomm_sources}
    ${scenebuilder_sources}
    ${simu_sources}
)

target_link_libraries(simulator Box2D)
set(CMAKE_CXX_FLAGS "-g -Wall -ggdb")
