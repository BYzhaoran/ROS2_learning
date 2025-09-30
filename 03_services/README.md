# 03 Services (服务)

## Learning Objectives (学习目标)
- 掌握服务服务器(Service Server)的创建
- 掌握服务客户端(Service Client)的创建
- 理解请求-响应通信模式
- 学习同步和异步服务调用

## Topics Covered (涵盖主题)
- Creating Service Servers
- Creating Service Clients
- Synchronous vs Asynchronous Service Calls
- Custom Service Definitions
- Service Discovery

## Files Structure (文件结构)
```
03_services/
├── README.md
├── service_server/
│   ├── server_node.cpp
│   └── CMakeLists.txt
├── service_client/
│   ├── client_node.cpp
│   └── CMakeLists.txt
├── async_service_client/
│   ├── async_client_node.cpp
│   └── CMakeLists.txt
└── custom_service/
    ├── AddTwoInts.srv
    ├── service_example.cpp
    └── CMakeLists.txt
```

## Key Concepts (关键概念)
- `create_service<>()`
- `create_client<>()`
- `async_send_request()`
- `wait_for_service()`
- Service request/response structures