cmake_minimum_required(VERSION 2.8.3)
project(current_obstacle_layer)

find_package(catkin REQUIRED
        COMPONENTS
            cmake_modules
            dynamic_reconfigure
            geometry_msgs
            laser_geometry
            map_msgs
            message_filters
            nav_msgs
            pluginlib
            roscpp
            sensor_msgs
            std_msgs
            tf2
            tf2_geometry_msgs
            tf2_ros
            tf2_sensor_msgs
            visualization_msgs
            voxel_grid
            costmap_2d
        )

include_directories(
    include
    ${catkin_INCLUDE_DIRS}
)


# dynamic reconfigure
generate_dynamic_reconfigure_options(
  cfg/CurrentObstaclePlugin.cfg
)

catkin_package(
    INCLUDE_DIRS
        include
    CATKIN_DEPENDS
        dynamic_reconfigure
        geometry_msgs
        laser_geometry
        map_msgs
        message_filters
        message_runtime
        nav_msgs
        pluginlib
        roscpp
        sensor_msgs
        std_msgs
        tf2_ros
        visualization_msgs
        voxel_grid
        costmap_2d
)

add_library(current_obstacle_layer
  src/current_obstacle_layer.cpp
)
add_dependencies(current_obstacle_layer ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(current_obstacle_layer
  ${catkin_LIBRARIES}
)

install(FILES col_plugin.xml
  DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}
)

install(TARGETS
    current_obstacle_layer
    ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
    LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
)
