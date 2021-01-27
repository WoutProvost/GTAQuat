#include <iostream>
#include <glm/gtc/quaternion.hpp>
#include <glm/vec3.hpp>
#include "GTAQuat.hpp"

using std::cout;
using std::endl;
using glm::vec3;

int main()
{
	// {
	// 	glm::quat q(glm::radians(vec3(30.0, 40.0, 50.0)));
	// 	vec3 v(glm::degrees(eulerAngles(q)));
	// 	cout << q.w << " " << q.x << " " << q.y << " " << q.z << endl;
	// 	cout << v.x << " " << v.y << " " << v.z << endl;
	// 	cout << endl;
	// }

	// {
	// 	GTAQuat q(vec3(30.0, 40.0, 50.0));
	// 	vec3 v = q.ToEuler();
	// 	cout << q.w << " " << q.x << " " << q.y << " " << q.z << endl;
	// 	cout << v.x << " " << v.y << " " << v.z << endl;
	// 	cout << endl;
	// }

	// {
	// 	GTAQuat q(-0.237544, -0.237661, 0.665970, -0.666012);
	// 	vec3 v = q.ToEuler();
	// 	cout << q.w << " " << q.x << " " << q.y << " " << q.z << endl;
	// 	cout << v.x << " " << v.y << " " << v.z << endl;
	// 	cout << endl;
	// }

	// {
	// 	GTAQuat q(-0.237602, -0.237603, 0.665991, -0.665991);
	// 	vec3 v = q.ToEuler();
	// 	cout << q.w << " " << q.x << " " << q.y << " " << q.z << endl;
	// 	cout << v.x << " " << v.y << " " << v.z << endl;
	// 	cout << endl;
	// }

	// {
	// 	GTAQuat q(-0.237544, -0.237661, 0.665970, -0.666012);
	// 	vec3 v = q.ToEuler();
	// 	cout << q.w << " " << q.x << " " << q.y << " " << q.z << endl;
	// 	cout << v.x << " " << v.y << " " << v.z << endl;

	// 	GTAQuat q2(v);
	// 	cout << "==> " << q2.w << " " << q2.x << " " << q2.y << " " << q2.z << endl;
	// 	vec3 v2 = q2.ToEuler();
	// 	cout << "==> " << v2.x << " " << v2.y << " " << v2.z << endl;
	// 	cout << endl;
	// }

	{
		GTAQuat q(-0.237602, -0.237603, 0.665991, -0.665991);
		vec3 v = q.ToEuler();
		cout << q.w << " " << q.x << " " << q.y << " " << q.z << endl;
		cout << v.x << " " << v.y << " " << v.z << endl;

		GTAQuat q2(v);
		cout << "==> " << q2.w << " " << q2.x << " " << q2.y << " " << q2.z << endl;
		vec3 v2 = q2.ToEuler();
		cout << "==> " << v2.x << " " << v2.y << " " << v2.z << endl;
		cout << endl;
	}
	return 0;
}