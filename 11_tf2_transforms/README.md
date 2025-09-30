# 11 TF2 Transforms (坐标变换)

## Learning Objectives (学习目标)
- 掌握TF2坐标变换系统
- 学习变换的发布和监听
- 理解坐标系关系和变换树
- 掌握静态和动态变换

## Topics Covered (涵盖主题)
- TF2 Transform System
- Publishing Transforms
- Listening to Transforms
- Static vs Dynamic Transforms
- Transform Trees and Visualization

## Files Structure (文件结构)
```
11_tf2_transforms/
├── README.md
├── transform_publisher/
│   ├── tf_publisher_node.cpp
│   └── CMakeLists.txt
├── transform_listener/
│   ├── tf_listener_node.cpp
│   └── CMakeLists.txt
├── static_transforms/
│   ├── static_tf_node.cpp
│   └── CMakeLists.txt
└── transform_examples/
    ├── robot_tf_example.cpp
    ├── camera_tf_example.cpp
    └── CMakeLists.txt
```

## Key Concepts (关键概念)
- `tf2_ros::TransformBroadcaster`
- `tf2_ros::TransformListener`
- `tf2_ros::Buffer`
- Static transform publisher
- Transform lookups