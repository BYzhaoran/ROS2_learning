# 02 Publishers and Subscribers (发布者和订阅者)

## Learning Objectives (学习目标)
- 掌握发布者(Publisher)的创建和使用
- 掌握订阅者(Subscriber)的创建和使用
- 理解话题(Topic)通信机制
- 学习消息类型和QoS配置

## Topics Covered (涵盖主题)
- Creating Publishers
- Creating Subscribers
- Message Types (std_msgs, geometry_msgs, sensor_msgs)
- QoS (Quality of Service) Configuration
- Topic Discovery and Introspection

## Files Structure (文件结构)
```
02_publishers_subscribers/
├── README.md
├── basic_publisher/
│   ├── publisher_node.cpp
│   └── CMakeLists.txt
├── basic_subscriber/
│   ├── subscriber_node.cpp
│   └── CMakeLists.txt
├── publisher_subscriber_combo/
│   ├── combo_node.cpp
│   └── CMakeLists.txt
└── qos_examples/
    ├── reliable_publisher.cpp
    ├── best_effort_subscriber.cpp
    └── CMakeLists.txt
```

## Key Concepts (关键概念)
- `create_publisher<>()`
- `create_subscription<>()`
- `publish()`
- Callback functions
- QoS profiles