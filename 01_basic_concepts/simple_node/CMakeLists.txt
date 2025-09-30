# Basic CMakeLists.txt template for ROS2 C++ nodes
# ROS2 C++节点的基础CMakeLists.txt模板

cmake_minimum_required(VERSION 3.8)
project(simple_node_example)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)

# Add executable
add_executable(simple_node simple_node.cpp)
ament_target_dependencies(simple_node rclcpp)

# Install
install(TARGETS
  simple_node
  DESTINATION lib/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()