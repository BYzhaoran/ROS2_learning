// Simple Node Example
// 简单节点示例

#include "rclcpp/rclcpp.hpp"

class SimpleNode : public rclcpp::Node
{
public:
    SimpleNode() : Node("simple_node")
    {
        RCLCPP_INFO(this->get_logger(), "Simple node has been started!");
        
        // TODO: Add your node functionality here
        // 在这里添加您的节点功能
    }

private:
    // TODO: Add member variables and functions
    // 添加成员变量和函数
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<SimpleNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}