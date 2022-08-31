#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "custom_interfaces/msg/servo_data.hpp"

using std::placeholders::_1;

#define SERVO_NAME "M1"
//TODO define servo pins up here and attach the servo inside the constructor

class TemplateServo : public rclcpp::Node
{
public:
  TemplateServo()
  : Node("template servo")
  {
    subscription_ = this->create_subscription<custom_interfaces::msg::ServoData>(
      SERVO_NAME, 10, std::bind(&TemplateServo::topic_callback, this, _1));
  }

private:
  void topic_callback(const custom_interfaces::msg::ServoData::SharedPtr msg) const
  {
    //TODO here move servo with the given value from function parameter
    
    RCLCPP_INFO(this->get_logger(), "I heard: '%d'", msg->position);
  }

  rclcpp::Subscription<custom_interfaces::msg::ServoData>::SharedPtr subscription_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<TemplateServo>());
  rclcpp::shutdown();
  return 0;
}
