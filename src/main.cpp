#include <iostream>
#include <glm/gtc/quaternion.hpp>
#include <glm/vec3.hpp>
#include "GTAQuat.hpp"

using std::cout;
using std::endl;
using glm::vec3;

int main()
{
	{
		glm::quat q(glm::radians(vec3(30.0f, 40.0f, 50.0f)));
		vec3 v(glm::degrees(eulerAngles(q)));
		cout << q.w << " " << q.x << " " << q.y << " " << q.z << endl;
		cout << v.x << " " << v.y << " " << v.z << endl;
		cout << endl;
	}

	{
		GTAQuat q(vec3(30.0f, 40.0f, 50.0f));
		vec3 v = q.ToEuler();
		cout << q.w << " " << q.x << " " << q.y << " " << q.z << endl;
		cout << v.x << " " << v.y << " " << v.z << endl;
		cout << endl;
	}

	// {
	// 	GTAQuat q; q.w = -0.237544f; q.x = -0.237661f; q.y = 0.665970f; q.z = -0.666012f;
	// 	vec3 v = q.ToEuler();
	// 	cout << q.w << " " << q.x << " " << q.y << " " << q.z << endl;
	// 	cout << v.x << " " << v.y << " " << v.z << endl;
	// 	cout << endl;
	// }

	// {
	// 	GTAQuat q; q.w = -0.237602f; q.x = -0.237603f; q.y = 0.665991f; q.z = -0.665991f;
	// 	vec3 v = q.ToEuler();
	// 	cout << q.w << " " << q.x << " " << q.y << " " << q.z << endl;
	// 	cout << v.x << " " << v.y << " " << v.z << endl;
	// 	cout << endl;
	// }
	return 0;
}