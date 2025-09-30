# 09 Time and Timers (时间和定时器)

## Learning Objectives (学习目标)
- 掌握ROS2时间系统的使用
- 学习定时器的创建和管理
- 理解时钟类型和时间源
- 掌握时间同步和仿真时间

## Topics Covered (涵盖主题)
- ROS Time vs Wall Time
- Creating and Using Timers
- Clock Types (System, ROS, Steady)
- Time Sources and Synchronization
- Simulation Time

## Files Structure (文件结构)
```
09_time_timers/
├── README.md
├── basic_timer/
│   ├── timer_node.cpp
│   └── CMakeLists.txt
├── time_operations/
│   ├── time_node.cpp
│   └── CMakeLists.txt
├── multiple_timers/
│   ├── multi_timer_node.cpp
│   └── CMakeLists.txt
└── simulation_time/
    ├── sim_time_node.cpp
    └── CMakeLists.txt
```

## Key Concepts (关键概念)
- `create_wall_timer()`
- `rclcpp::Time`
- `rclcpp::Duration`
- Clock types
- Time synchronization