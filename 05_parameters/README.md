# 05 Parameters (参数)

## Learning Objectives (学习目标)
- 掌握参数的声明和使用
- 学习动态参数更新
- 理解参数类型和验证
- 掌握参数服务接口

## Topics Covered (涵盖主题)
- Declaring Parameters
- Getting and Setting Parameters
- Parameter Callbacks
- Parameter Validation
- Parameter Files (YAML)

## Files Structure (文件结构)
```
05_parameters/
├── README.md
├── basic_parameters/
│   ├── parameter_node.cpp
│   └── CMakeLists.txt
├── dynamic_parameters/
│   ├── dynamic_param_node.cpp
│   └── CMakeLists.txt
├── parameter_validation/
│   ├── validated_param_node.cpp
│   └── CMakeLists.txt
└── parameter_files/
    ├── params.yaml
    ├── param_file_node.cpp
    └── CMakeLists.txt
```

## Key Concepts (关键概念)
- `declare_parameter<>()`
- `get_parameter()`
- `set_parameter()`
- Parameter callbacks
- Parameter descriptors