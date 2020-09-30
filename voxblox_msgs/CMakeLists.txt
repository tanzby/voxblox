cmake_minimum_required(VERSION 3.10)
project(voxblox_msgs)

find_package(catkin REQUIRED COMPONENTS
    std_msgs
    message_runtime
    message_generation
)

add_message_files(
FILES
    Block.msg
    Layer.msg
    MeshBlock.msg
    Mesh.msg
    VoxelEvaluationDetails.msg
)
add_service_files(
FILES
    FilePath.srv
)

generate_messages(
DEPENDENCIES
    std_msgs
)

catkin_package(
CATKIN_DEPENDS
    std_msgs
    message_runtime
)