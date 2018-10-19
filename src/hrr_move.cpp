#include "ros/ros.h"
#include "ros/assert.h"
#include "sensor_msgs/JointState.h"

int main(int argc, char **argv)
{
    	//Initializen the ros
    	ros::init(argc, argv, "move_joints");

    	//Declare the node handle
    	ros::NodeHandle node;

    	//Decleare a joint state publisher
    	ros::Publisher joint_pub = node.advertise<sensor_msgs::JointState>("/bioloid_interface/command",10);

    	//Define the joint state
    	sensor_msgs::JointState joint_state;

	//Define motor name in sequence of the motor
	joint_state.name.push_back("r_shoulder_swing_joint");		//1
	joint_state.name.push_back("l_shoulder_swing_joint");		//2
	joint_state.name.push_back("r_shoulder_lateral_joint");		//3
	joint_state.name.push_back("l_shoulder_lateral_joint");		//4
	joint_state.name.push_back("r_elbow_joint");			//5
	joint_state.name.push_back("l_elbow_joint");			//6
	joint_state.name.push_back("r_hip_twist_joint");		//7
	joint_state.name.push_back("l_hip_twist_joint");		//8
	joint_state.name.push_back("r_hip_lateral_joint");		//9
	joint_state.name.push_back("l_hip_lateral_joint");		//10
	joint_state.name.push_back("r_hip_swing_joint");		//11
	joint_state.name.push_back("l_hip_swing_joint");		//12
	joint_state.name.push_back("r_knee_joint");			//13
	joint_state.name.push_back("l_knee_joint");			//14
	joint_state.name.push_back("r_ankle_swing_joint");		//15
	joint_state.name.push_back("l_ankle_swing_joint");		//16
	joint_state.name.push_back("r_ankle_lateral_joint");		//17
	joint_state.name.push_back("r_ankle_lateral_joint");		//18

	//Define the number of motor
	joint_state.position.resize(18);

	double angle_forward [18][53] = 
	{
		{-1.4163755941,	-1.4163755941,	-1.4163755941,	-1.4163755941,	-1.4163755941,	-1.4163755941},
		{1.4112623249,	1.4112623249,	1.4112623249,	1.4112623249,	1.4112623249,	1.4112623249},
		{-1.1913917453,	-1.1913917453,	-1.1913917453,	-1.1913917453,	-1.1913917453,	-1.1913917453},
	};


	while(ros::ok())
	{
	for (unsigned int j = 0; j<54; j++)
	{
		for (unsigned int i = 0; i < 18; i++)
		{
			joint_state.position[i] = angle_forward[i][j];
			joint_pub.publish(joint_state);
		}
	}

    	ros::spinOnce();
	break;
		
  	}

   	return 0;
}

