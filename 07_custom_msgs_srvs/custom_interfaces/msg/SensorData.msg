# Custom Message Example
# 自定义消息示例

# Header for timestamp and frame information
std_msgs/Header header

# Sensor identification
string sensor_name
uint32 sensor_id

# Data payload
float64[] data_values
string data_units

# Status information
uint8 status
uint8 STATUS_OK=0
uint8 STATUS_WARNING=1
uint8 STATUS_ERROR=2