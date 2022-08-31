#include <memory>
#include <chrono>


#include "rclcpp/rclcpp.hpp"

#include "custom_interfaces/msg/led_status.hpp"
#include "custom_interfaces/msg/servo_data.hpp"
#include "custom_interfaces/msg/target_location.hpp"

using namespace std::chrono_literals;
using std::placeholders::_1;


class Brain : public rclcpp::Node
{
public:
  Brain()
  : Node("servo_template")
  {
    RCLCPP_INFO(this->get_logger(), "Brain node created");

    publisher_ServoPos = this->create_publisher<custom_interfaces::msg::ServoData>("servo_pos_topic", 10);
    publisher_LedStatus = this->create_publisher<custom_interfaces::msg::LedStatus>("status_led_topic", 10);


    RCLCPP_INFO(this->get_logger(), "Topics published");

    subscription_TargetLocation = this->create_subscription<custom_interfaces::msg::TargetLocation>(
      "target_location_topic", 10, std::bind(&Brain::target_location_callback, this, _1));

    RCLCPP_INFO(this->get_logger(), "Topcis subscribed");


    timer_ = this->create_wall_timer(
      500ms, std::bind(&Brain::timer_callback, this));   // set frequency here
  }

  ~Brain()
  {
    RCLCPP_INFO(this->get_logger(), "Brain node destroyed");
  }

private:
    // time_callback gets called every frequency
    void timer_callback()
    {
        RCLCPP_INFO(this->get_logger(), "time_callback");
        
        RCLCPP_INFO(this->get_logger(), "Target position: \t %f \t %f \t %f", target_position[0], target_position[1], target_position[2]);
    }

    void target_location_callback(const custom_interfaces::msg::TargetLocation::SharedPtr msg)
    {
        target_position[0] = msg->pos1;        
        target_position[1] = msg->pos2;        
        target_position[2] = msg->pos3;
    }


    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<custom_interfaces::msg::ServoData>::SharedPtr publisher_ServoPos;
    rclcpp::Publisher<custom_interfaces::msg::LedStatus>::SharedPtr publisher_LedStatus;

    rclcpp::Subscription<custom_interfaces::msg::TargetLocation>::SharedPtr subscription_TargetLocation;
    double target_position[3];

};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<Brain>());
  rclcpp::shutdown();
  return 0;
}