# Examples (示例项目)

## Overview (概述)
This directory contains complete example projects that demonstrate the integration of multiple ROS2 C++ concepts learned from the individual sections.

## Project Structure (项目结构)
```
examples/
├── README.md
├── simple_robot_controller/
│   ├── src/
│   ├── include/
│   ├── launch/
│   ├── config/
│   ├── package.xml
│   └── CMakeLists.txt
├── sensor_data_processor/
│   ├── src/
│   ├── include/
│   ├── msg/
│   ├── srv/
│   ├── package.xml
│   └── CMakeLists.txt
└── multi_node_system/
    ├── src/
    ├── launch/
    ├── config/
    ├── package.xml
    └── CMakeLists.txt
```

## Example Projects (示例项目)

### 1. Simple Robot Controller
- Combines publishers, subscribers, services, and parameters
- Demonstrates basic robot control patterns
- Uses lifecycle nodes for state management

### 2. Sensor Data Processor  
- Shows custom message/service definitions
- Implements data processing pipeline
- Demonstrates logging and time synchronization

### 3. Multi-Node System
- Complex system with multiple interconnected nodes
- Uses launch files for system orchestration
- Demonstrates TF2 transforms and actions