from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='template_code',
            namespace='template_code_1',
            executable='ServoTemplate',
            name='template'
        ),
        Node(
            package='template_code',
            namespace='template_code_2',
            executable='ServoTemplate',
            name='template'
        ),
    ])
