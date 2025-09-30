# 06 Launch Files (启动文件)

## Learning Objectives (学习目标)
- 掌握Launch文件的创建和使用
- 学习多节点启动和配置
- 理解参数传递和命名空间
- 掌握条件启动和组合

## Topics Covered (涵盖主题)
- Basic Launch Files
- Node Parameters in Launch
- Namespaces and Remapping
- Conditional Launch
- Launch File Composition

## Files Structure (文件结构)
```
06_launch_files/
├── README.md
├── basic_launch/
│   ├── basic_launch.py
│   └── basic_launch.xml
├── parameterized_launch/
│   ├── param_launch.py
│   ├── config.yaml
│   └── CMakeLists.txt
├── conditional_launch/
│   ├── conditional_launch.py
│   └── CMakeLists.txt
└── composition_launch/
    ├── composition_launch.py
    ├── component_nodes.cpp
    └── CMakeLists.txt
```

## Key Concepts (关键概念)
- Launch files (.py, .xml, .yaml)
- Node declarations
- Parameter passing
- Remapping
- Launch arguments