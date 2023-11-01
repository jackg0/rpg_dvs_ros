// This file is part of DVS-ROS - the RPG DVS ROS Package

#include "dvxplorer_ros_driver/driver.h"

#include <ros/ros.h>

int main(int argc, char *argv[]) {
	ros::init(argc, argv, "dvxplorer_ros_driver");

	ros::NodeHandle nh;

	dvxplorer_ros_driver::DvxplorerRosDriver *driver = new dvxplorer_ros_driver::DvxplorerRosDriver(nh);

	ros::spin();

	driver->dataStop();
	return 0;
}
