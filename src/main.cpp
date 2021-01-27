#include <iostream>
#include <glm/gtc/quaternion.hpp>
#include <glm/vec3.hpp>
#include "GTAQuat.hpp"

using std::cout;
using std::endl;
using std::cerr;
using glm::vec3;

/*
	Epsilon types:
		0 - zero (default)
		1 - ieee
		2 - illidan

	Terminology:
		A = original quat
		B = quat_to_euler(A)
		C = euler_to_quat(B)
		D = quat_to_euler(C)

	Output:
		1. original quat A
		2. epsilon value used
		3. space separated differences between A<->C, B<->D
*/

int main(int argc, char **argv)
{
	
	if (argc != 6) 
	{
		cerr << "Usage: /<name> <qw> <qx> <qy> <qz> <epsilon_type>" << endl;
		exit(1);
	}

	float qw = (float)atof(argv[1]);
	float qx = (float)atof(argv[2]);
	float qy = (float)atof(argv[3]);
	float qz = (float)atof(argv[4]);
	short epsilon = atoi(argv[5]);

	if(epsilon == 1) 
	{
		// IEEE
		GTAQuatConfig::epsilon = glm::epsilon<float>();
	}
	else if (epsilon == 2)
	{
		// Illidan
		GTAQuatConfig::epsilon = 0.00000202655792236328125f;
	}
	else
	{
		// Zero, default
		GTAQuatConfig::epsilon = 0.0f;
	}

	GTAQuat a(qw, qx, qy, qz);
	vec3 b = a.ToEuler();
	GTAQuat c(b);
	vec3 d = c.ToEuler();

	float quat_diff = glm::abs(a.w - c.w) + glm::abs(a.x - c.x) + glm::abs(a.y - c.y) + glm::abs(a.z - c.z);
	float vec_diff = glm::abs(b.x - d.x) + glm::abs(b.y - d.y) + glm::abs(b.z - d.z);

	cout << qw << " " << qx << " " << qy << " " << qz << endl;
	cout << epsilon << endl;
	cout << quat_diff << " " << vec_diff << endl;
	return 0;
}