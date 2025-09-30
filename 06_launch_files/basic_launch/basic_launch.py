# Basic launch file example
# 基础启动文件示例

from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='your_package_name',
            executable='simple_node',
            name='simple_node_instance',
            output='screen',
            parameters=[{
                'parameter_name': 'parameter_value'
            }]
        ),
        # Add more nodes here
        # 在这里添加更多节点
    ])