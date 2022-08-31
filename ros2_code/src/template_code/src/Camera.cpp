#include <memory>

#include "rclcpp/rclcpp.hpp"

class Camera : public rclcpp::Node
{
public:
  Camera()
  : Node("servo_template")
  {
    RCLCPP_INFO(this->get_logger(), "Camera node created");
  }

  ~Camera()
  {
    RCLCPP_INFO(this->get_logger(), "Camera node destroyed");
  }

private:

};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<Camera>());
  rclcpp::shutdown();
  return 0;
}