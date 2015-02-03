cmake_minimum_required(VERSION 2.8.3)
project(ros_named_logger_test)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED COMPONENTS 
	roscpp )

###################################
## catkin specific configuration ##
###################################
## The catkin_package macro generates cmake config files for your package
## Declare things to be passed to dependent projects
## INCLUDE_DIRS: uncomment this if you package contains header files
## LIBRARIES: libraries you create in this project that dependent projects also need
## CATKIN_DEPENDS: catkin_packages dependent projects also need
## DEPENDS: system dependencies of this project that dependent projects also need
#catkin_package(
#  INCLUDE_DIRS
#  LIBRARIES 
#  CATKIN_DEPENDS 
#  DEPENDS 
#)

###########
## Build ##
###########

## Specify additional locations of header files
## Your package locations should be listed before other locations
# include_directories(include)

## Declare a cpp library
# add_library(ros_named_logger_test
#   src/${PROJECT_NAME}/ros_named_logger_test.cpp
# )

## Declare a cpp executable
add_executable(ros_named_logger_test_node src/ros_named_logger_test.cpp)

## Add cmake target dependencies of the executable/library
## as an example, message headers may need to be generated before nodes
# add_dependencies(ros_named_logger_test_node ros_named_logger_test_generate_messages_cpp)

## Specify libraries to link a library or executable target against
target_link_libraries(ros_named_logger_test_node
  ${catkin_LIBRARIES}
)


