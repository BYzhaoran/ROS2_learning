# 04 Actions (动作)

## Learning Objectives (学习目标)
- 掌握动作服务器(Action Server)的创建
- 掌握动作客户端(Action Client)的创建
- 理解长时间运行任务的处理
- 学习进度反馈和结果处理

## Topics Covered (涵盖主题)
- Creating Action Servers
- Creating Action Clients
- Handling Goals, Feedback, and Results
- Action Preemption and Cancellation
- Custom Action Definitions

## Files Structure (文件结构)
```
04_actions/
├── README.md
├── action_server/
│   ├── server_node.cpp
│   └── CMakeLists.txt
├── action_client/
│   ├── client_node.cpp
│   └── CMakeLists.txt
├── fibonacci_example/
│   ├── fibonacci_action_server.cpp
│   ├── fibonacci_action_client.cpp
│   └── CMakeLists.txt
└── custom_action/
    ├── Fibonacci.action
    ├── action_example.cpp
    └── CMakeLists.txt
```

## Key Concepts (关键概念)
- `rclcpp_action::create_server<>()`
- `rclcpp_action::create_client<>()`
- Goal handling callbacks
- Feedback publishing
- Result setting