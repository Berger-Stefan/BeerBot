#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "custom_interfaces/msg/led_status.hpp"

using std::placeholders::_1;

//TODO define pins up here for the leds

class StatusLed : public rclcpp::Node
{
public:
  StatusLed()
  : Node("status_led")
  {
    RCLCPP_INFO(this->get_logger(), "LED node created");
    subscription_ = this->create_subscription<custom_interfaces::msg::LedStatus>(
      "status_led_topic", 10, std::bind(&StatusLed::topic_callback, this, _1));
  }

  ~StatusLed()
  {
    RCLCPP_INFO(this->get_logger(), "LED node destroyed");
  }

private:
  void topic_callback(const custom_interfaces::msg::LedStatus::SharedPtr msg) const
  {
    //TODO here set values for the LEDs
    
    RCLCPP_INFO(this->get_logger(), "LED 1: %d \t LED 2: %d \t LED 3: %d", msg->led1, msg->led2, msg->led3);
  }

  rclcpp::Subscription<custom_interfaces::msg::LedStatus>::SharedPtr subscription_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<StatusLed>());
  rclcpp::shutdown();
  return 0;
}