# 07 Custom Messages and Services (自定义消息和服务)

## Learning Objectives (学习目标)
- 掌握自定义消息类型的创建
- 掌握自定义服务类型的创建
- 学习消息和服务的编译和使用
- 理解接口包的组织结构

## Topics Covered (涵盖主题)
- Creating Custom Messages (.msg)
- Creating Custom Services (.srv)
- Creating Custom Actions (.action)
- Interface Package Structure
- Message Dependencies

## Files Structure (文件结构)
```
07_custom_msgs_srvs/
├── README.md
├── custom_interfaces/
│   ├── msg/
│   │   ├── CustomMessage.msg
│   │   └── SensorData.msg
│   ├── srv/
│   │   ├── AddTwoInts.srv
│   │   └── GetSensorData.srv
│   ├── action/
│   │   └── ProcessData.action
│   ├── package.xml
│   └── CMakeLists.txt
├── msg_publisher/
│   ├── custom_msg_publisher.cpp
│   └── CMakeLists.txt
└── srv_server/
    ├── custom_srv_server.cpp
    └── CMakeLists.txt
```

## Key Concepts (关键概念)
- Message definition syntax
- Service request/response structure
- Action goal/result/feedback structure
- Interface dependencies
- Code generation