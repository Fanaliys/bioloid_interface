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
	joint_state.name.push_back("r_shoulder_swing_joint");
	joint_state.name.push_back("r_shoulder_lateral_joint");
	joint_state.name.push_back("r_elbow_joint");

	//Define the number of motor
	joint_state.position.resize(3);


	while(ros::ok())
	{
    		//update cmd.command commands here
		//32
		sleep(2);
		joint_state.position[0] = -1.41638;
    		joint_state.position[1] = -1.19139;
    		joint_state.position[2] = -0.25566;
    		joint_pub.publish(joint_state);
		sleep(2);
		joint_state.position[0] = -1.41638;
    		joint_state.position[1] = -1.19139;
    		joint_state.position[2] = -0.25566;
		joint_pub.publish(joint_state);
		sleep(2);
		joint_state.position[0] = -1.41638;
    		joint_state.position[1] = -1.19139;
    		joint_state.position[2] = -0.25566;
		joint_pub.publish(joint_state);
		sleep(2);
		joint_state.position[0] = -1.41638;
    		joint_state.position[1] = -1.19139;
    		joint_state.position[2] = -0.25566;
		joint_pub.publish(joint_state);
		sleep(2);
		joint_state.position[0] = -1.41638;
    		joint_state.position[1] = -1.19139;
    		joint_state.position[2] = -0.25566;
		joint_pub.publish(joint_state);
		sleep(2);
		joint_state.position[0] = -1.41638;
    		joint_state.position[1] = -1.19139;
    		joint_state.position[2] = -0.25566;
		joint_pub.publish(joint_state);
		sleep(2);
		joint_state.position[0] = -1.41638;
    		joint_state.position[1] = -1.19139;
    		joint_state.position[2] = -0.25566;
		joint_pub.publish(joint_state);
		sleep(2);


		//33
		joint_state.position[0] = -1.4266;
    		joint_state.position[1] = -1.19139;
    		joint_state.position[2] = -0.25566;
		joint_pub.publish(joint_state);
		sleep(2);
		joint_state.position[0] = -1.3499;
    		joint_state.position[1] = -1.19139;
    		joint_state.position[2] = -0.25566;
		joint_pub.publish(joint_state);
		sleep(2);
		joint_state.position[0] = -1.2732;
    		joint_state.position[1] = -1.19139;
    		joint_state.position[2] = -0.25566;
		joint_pub.publish(joint_state);
		sleep(2);
		joint_state.position[0] = -1.20673;
    		joint_state.position[1] = -1.19139;
    		joint_state.position[2] = -0.25566;
		joint_pub.publish(joint_state);
		sleep(2);
		joint_state.position[0] = -1.15049;
    		joint_state.position[1] = -1.19139;
    		joint_state.position[2] = -0.25566;
		joint_pub.publish(joint_state);
		sleep(2);
		joint_state.position[0] = -1.10958;
    		joint_state.position[1] = -1.19139;
    		joint_state.position[2] = -0.25566;
		joint_pub.publish(joint_state);
		sleep(2);
		joint_state.position[0] = -1.0789;
    		joint_state.position[1] = -1.19139;
    		joint_state.position[2] = -0.25566;
		joint_pub.publish(joint_state);
		sleep(2);


		//38
		joint_state.position[0] = -1.08401;
    		joint_state.position[1] = -1.19139;
    		joint_state.position[2] = -0.25566;
		joint_pub.publish(joint_state);
		sleep(2);
		joint_state.position[0] = -1.06867;
    		joint_state.position[1] = -1.19139;
    		joint_state.position[2] = -0.25566;
		joint_pub.publish(joint_state);
		sleep(2);
		joint_state.position[0] = -1.07379;
    		joint_state.position[1] = -1.19139;
    		joint_state.position[2] = -0.25566;
		joint_pub.publish(joint_state);
		sleep(2);
		joint_state.position[0] = -1.09424;
    		joint_state.position[1] = -1.19139;
    		joint_state.position[2] = -0.25566;
		joint_pub.publish(joint_state);
		sleep(2);
		joint_state.position[0] = -1.13515;
    		joint_state.position[1] = -1.19139;
    		joint_state.position[2] = -0.25566;
		joint_pub.publish(joint_state);
		sleep(2);
		joint_state.position[0] = -1.18628;
    		joint_state.position[1] = -1.19139;
    		joint_state.position[2] = -0.25566;
		joint_pub.publish(joint_state);
		sleep(2);
		joint_state.position[0] = -1.24764;
    		joint_state.position[1] = -1.19139;
    		joint_state.position[2] = -0.25566;
		joint_pub.publish(joint_state);
		sleep(2);



    		ros::spinOnce();
		break;
  	}

   	return 0;
}

