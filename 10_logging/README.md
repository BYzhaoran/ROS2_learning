# 10 Logging (日志记录)

## Learning Objectives (学习目标)
- 掌握ROS2日志系统的使用
- 学习不同日志级别的使用
- 理解日志配置和输出格式
- 掌握结构化日志记录

## Topics Covered (涵盖主题)
- Logging Levels (DEBUG, INFO, WARN, ERROR, FATAL)
- Structured Logging
- Log Configuration
- Console and File Output
- Log Filtering

## Files Structure (文件结构)
```
10_logging/
├── README.md
├── basic_logging/
│   ├── logging_node.cpp
│   └── CMakeLists.txt
├── structured_logging/
│   ├── structured_log_node.cpp
│   └── CMakeLists.txt
├── log_configuration/
│   ├── config_log_node.cpp
│   ├── log_config.yaml
│   └── CMakeLists.txt
└── conditional_logging/
    ├── conditional_log_node.cpp
    └── CMakeLists.txt
```

## Key Concepts (关键概念)
- `RCLCPP_INFO()`, `RCLCPP_WARN()`, etc.
- Logger configuration
- Log filtering
- Structured logging
- Performance considerations