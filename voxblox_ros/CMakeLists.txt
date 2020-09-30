cmake_minimum_required(VERSION 3.10)
project(voxblox_ros)

set(CMAKE_MACOSX_RPATH 0)
add_definitions(-std=c++14 -Wall -Wextra)

list(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake_modules)

find_package(catkin REQUIRED COMPONENTS
    cv_bridge 
    interactive_markers
    pcl_conversions
    pcl_ros
    sensor_msgs
    tf
    tf_conversions
    eigen_conversions
    voxblox
    voxblox_msgs
    voxblox_rviz_plugin
)

find_package(Glog REQUIRED)
find_package(gflags REQUIRED)

catkin_package(
INCLUDE_DIRS
    include
LIBRARIES
    ${PROJECT_NAME}
CATKIN_DEPENDS
    eigen_conversions
    tf_conversions
    cv_bridge
    interactive_markers
    pcl_conversions
    pcl_ros
    sensor_msgs
    tf
    voxblox
    voxblox_msgs
    voxblox_rviz_plugin
DEPENDS
)

#############
# LIBRARIES #
#############

include_directories(include ${catkin_INCLUDE_DIRS})
message(STATUS "catkin_INCLUDE_DIRS: " ${catkin_INCLUDE_DIRS})

add_library(${PROJECT_NAME}
  src/esdf_server.cc
  src/interactive_slider.cc
  src/simulation_server.cc
  src/intensity_server.cc
  src/transformer.cc
  src/tsdf_server.cc
)

target_link_libraries(${PROJECT_NAME} ${GLOG_LIBRARIES} ${catkin_LIBRARIES} gflags)

############
# BINARIES #
############

add_executable(voxblox_eval
  src/voxblox_eval.cc
)
target_link_libraries(voxblox_eval ${PROJECT_NAME})

add_executable(tsdf_server
  src/tsdf_server_node.cc
)
target_link_libraries(tsdf_server ${PROJECT_NAME})

add_executable(esdf_server
  src/esdf_server_node.cc
)
target_link_libraries(esdf_server ${PROJECT_NAME})

add_executable(intensity_server
  src/intensity_server_node.cc
)
target_link_libraries(intensity_server ${PROJECT_NAME})

add_executable(simulation_eval
  src/simulation_eval.cc
)
target_link_libraries(simulation_eval ${PROJECT_NAME})

add_executable(visualize_tsdf
  src/visualize_tsdf.cc
)
target_link_libraries(visualize_tsdf ${PROJECT_NAME})
