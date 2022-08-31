#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "custom_interfaces/msg/servo_data.hpp"

using std::placeholders::_1;

#define SERVO_NAME "M1"
//TODO define servo pins up here and attach the servo inside the constructor

class ServoTemplate : public rclcpp::Node
{
public:
  ServoTemplate()
  : Node("servo_template")
  {
    RCLCPP_INFO(this->get_logger(), "Motor %s node created", SERVO_NAME);
    subscription_ = this->create_subscription<custom_interfaces::msg::ServoData>(
      SERVO_NAME, 10, std::bind(&ServoTemplate::topic_callback, this, _1));
  }

  ~ServoTemplate()
  {
    RCLCPP_INFO(this->get_logger(), "Motor %s node destroyed", SERVO_NAME);
  }

private:
  void topic_callback(const custom_interfaces::msg::ServoData::SharedPtr msg) const
  {
    //TODO here move servo with the given value from function parameter
    
    RCLCPP_INFO(this->get_logger(), "Set motor %s positon to: '%d'", SERVO_NAME, msg->position);
  }

  rclcpp::Subscription<custom_interfaces::msg::ServoData>::SharedPtr subscription_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<ServoTemplate>());
  rclcpp::shutdown();
  return 0;
}