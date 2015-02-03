#include <ros/ros.h> 
 
class TestClass
{
  public:
	TestClass(const std::string name)
	{
		ROS_INFO_NAMED(name, "TestClass: This logger should be named %s?", name.c_str());
	}
 
	~TestClass(){};
	
};
 
int main(int argc, char *argv[])
{
	ros::init(argc, argv, "Node_Name");
	ros::NodeHandle n;
	
	
	std::string name1 = "Name1";
	std::string name2 = "Name2";
	
	ROS_INFO_NAMED(name1, "Main: This logger should be named %s?", name1.c_str());
	ROS_INFO_NAMED(name2, "Main: This logger should be named %s?", name2.c_str());
 
	TestClass test1(name1);
	TestClass test2(name2);
}


