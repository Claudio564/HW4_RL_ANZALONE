#include <ros/ros.h>
#include <tf/transform_listener.h>
#include <geometry_msgs/PoseStamped.h>
#include "boost/thread.hpp"
#include "Eigen/Dense"
#include <move_base_msgs/MoveBaseAction.h>
#include <actionlib/client/simple_action_client.h>
#include <tf/transform_broadcaster.h>

class TF_NAV {

    public:
        TF_NAV();
        void run();
        void arucoPoseCallback();
        void tf_listener_fun();
        void position_pub();
        void broadcast_listener();
        void goal_listener_1();
        void goal_listener_2();
        void goal_listener_3();
        void goal_listener_4();
        void goal_listener_5();
        void goal_listener_6();
        void goal_listener_7();
        void goal_listener_8();
        void goal_listener_4b();
        void goal_listener_4b_1();
        void send_goal();

    private:

        ros::NodeHandle _nh;

        ros::Publisher _position_pub;

        Eigen::Vector3d _home_pos;

        Eigen::Vector3d _cur_pos;
        Eigen::Vector4d _cur_or;

        Eigen::Vector3d _goal1_pos;
        Eigen::Vector4d _goal1_or;
        Eigen::Vector3d _goal2_pos;
        Eigen::Vector4d _goal2_or;
        Eigen::Vector3d _goal3_pos;
        Eigen::Vector4d _goal3_or;
        Eigen::Vector3d _goal4_pos;
        Eigen::Vector4d _goal4_or;

        Eigen::Vector3d _goal5_pos;
        Eigen::Vector4d _goal5_or;
        Eigen::Vector3d _goal6_pos;
        Eigen::Vector4d _goal6_or;
        Eigen::Vector3d _goal7_pos;
        Eigen::Vector4d _goal7_or;
        Eigen::Vector3d _goal8_pos;
        Eigen::Vector4d _goal8_or;

        Eigen::Vector3d _goal4b_pos;
        Eigen::Vector4d _goal4b_or;

        Eigen::Vector3d _goal4b_1_pos;
        Eigen::Vector4d _goal4b_1_or;

        typedef actionlib::SimpleActionClient<move_base_msgs::MoveBaseAction> MoveBaseClient;


};