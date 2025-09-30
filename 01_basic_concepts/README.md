# 01 Basic Concepts (基础概念)

## Learning Objectives (学习目标)
- 理解ROS2的基本架构
- 学习节点(Nodes)的概念和创建
- 理解话题(Topics)、服务(Services)、动作(Actions)的基本概念
- 掌握ROS2 C++的基本编程模式

## Topics Covered (涵盖主题)
- ROS2 Architecture Overview
- Creating Basic Nodes
- Node Lifecycle
- Executors and Spinning
- Basic Package Structure

## Files Structure (文件结构)
```
01_basic_concepts/
├── README.md
├── simple_node/
│   ├── simple_node.cpp
│   └── CMakeLists.txt
├── node_with_timer/
│   ├── timer_node.cpp
│   └── CMakeLists.txt
└── package_examples/
    ├── package.xml
    └── CMakeLists.txt
```

## Key Concepts (关键概念)
- `rclcpp::Node`
- `rclcpp::init()` and `rclcpp::shutdown()`
- `rclcpp::spin()`
- Node constructors and destructors