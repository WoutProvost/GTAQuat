#include <iostream>
#include <glm/gtc/quaternion.hpp>
#include <glm/vec3.hpp>
#include "GTAQuat.hpp"

using std::cout;
using std::endl;
using std::cerr;
using glm::vec3;

int main(int argc, char **argv)
{
	{
		GTAQuat a(-0.237544f, -0.237661f, 0.66597f, -0.666012f); a.EPSILON = 0.00000202655792236328125f;
		vec3 b = a.ToEuler();
		GTAQuat c(b); c.EPSILON = 0.00000202655792236328125f;
		vec3 d = c.ToEuler();
		GTAQuat e(d); e.EPSILON = 0.00000202655792236328125f;
		vec3 f = e.ToEuler();
		cout << "----- Epsilon: IllidanS4 -----" << endl;
		cout << a.w << " " << a.x << " " << a.y << " " << a.z << endl;
		cout << b.x << " " << b.y << " " << b.z << endl;
		cout << c.w << " " << c.x << " " << c.y << " " << c.z << endl;
		cout << d.x << " " << d.y << " " << d.z << endl;
		cout << e.w << " " << e.x << " " << e.y << " " << e.z << endl;
		cout << f.x << " " << f.y << " " << f.z << endl;
	}
	{
		GTAQuat a(-0.237544f, -0.237661f, 0.66597f, -0.666012f); a.EPSILON = glm::epsilon<float>();
		vec3 b = a.ToEuler();
		GTAQuat c(b); c.EPSILON = glm::epsilon<float>();
		vec3 d = c.ToEuler();
		GTAQuat e(d); e.EPSILON = glm::epsilon<float>();
		vec3 f = e.ToEuler();
		cout << "----- Epsilon: machine -----" << endl;
		cout << a.w << " " << a.x << " " << a.y << " " << a.z << endl;
		cout << b.x << " " << b.y << " " << b.z << endl;
		cout << c.w << " " << c.x << " " << c.y << " " << c.z << endl;
		cout << d.x << " " << d.y << " " << d.z << endl;
		cout << e.w << " " << e.x << " " << e.y << " " << e.z << endl;
		cout << f.x << " " << f.y << " " << f.z << endl;
	}
	{
		GTAQuat a(-0.237544f, -0.237661f, 0.66597f, -0.666012f); a.EPSILON = 0.0f;
		vec3 b = a.ToEuler();
		GTAQuat c(b); c.EPSILON = 0.0f;
		vec3 d = c.ToEuler();
		GTAQuat e(d); e.EPSILON = 0.0f;
		vec3 f = e.ToEuler();
		cout << "----- Epsilon: zero -----" << endl;
		cout << a.w << " " << a.x << " " << a.y << " " << a.z << endl;
		cout << b.x << " " << b.y << " " << b.z << endl;
		cout << c.w << " " << c.x << " " << c.y << " " << c.z << endl;
		cout << d.x << " " << d.y << " " << d.z << endl;
		cout << e.w << " " << e.x << " " << e.y << " " << e.z << endl;
		cout << f.x << " " << f.y << " " << f.z << endl;
		cout << endl;
	}
	{
		GTAQuat a(-0.237602f, -0.237603f, 0.665991f, -0.665991f); a.EPSILON = 0.00000202655792236328125f;
		vec3 b = a.ToEuler();
		GTAQuat c(b); c.EPSILON = 0.00000202655792236328125f;
		vec3 d = c.ToEuler();
		GTAQuat e(d); e.EPSILON = 0.00000202655792236328125f;
		vec3 f = e.ToEuler();
		cout << "----- Epsilon: IllidanS4 -----" << endl;
		cout << a.w << " " << a.x << " " << a.y << " " << a.z << endl;
		cout << b.x << " " << b.y << " " << b.z << endl;
		cout << c.w << " " << c.x << " " << c.y << " " << c.z << endl;
		cout << d.x << " " << d.y << " " << d.z << endl;
		cout << e.w << " " << e.x << " " << e.y << " " << e.z << endl;
		cout << f.x << " " << f.y << " " << f.z << endl;
	}
	{
		GTAQuat a(-0.237602f, -0.237603f, 0.665991f, -0.665991f); a.EPSILON = glm::epsilon<float>();
		vec3 b = a.ToEuler();
		GTAQuat c(b); c.EPSILON = glm::epsilon<float>();
		vec3 d = c.ToEuler();
		GTAQuat e(d); e.EPSILON = glm::epsilon<float>();
		vec3 f = e.ToEuler();
		cout << "----- Epsilon: machine -----" << endl;
		cout << a.w << " " << a.x << " " << a.y << " " << a.z << endl;
		cout << b.x << " " << b.y << " " << b.z << endl;
		cout << c.w << " " << c.x << " " << c.y << " " << c.z << endl;
		cout << d.x << " " << d.y << " " << d.z << endl;
		cout << e.w << " " << e.x << " " << e.y << " " << e.z << endl;
		cout << f.x << " " << f.y << " " << f.z << endl;
	}
	{
		GTAQuat a(-0.237602f, -0.237603f, 0.665991f, -0.665991f); a.EPSILON = 0.0f;
		vec3 b = a.ToEuler();
		GTAQuat c(b); c.EPSILON = 0.0f;
		vec3 d = c.ToEuler();
		GTAQuat e(d); e.EPSILON = 0.0f;
		vec3 f = e.ToEuler();
		cout << "----- Epsilon: zero -----" << endl;
		cout << a.w << " " << a.x << " " << a.y << " " << a.z << endl;
		cout << b.x << " " << b.y << " " << b.z << endl;
		cout << c.w << " " << c.x << " " << c.y << " " << c.z << endl;
		cout << d.x << " " << d.y << " " << d.z << endl;
		cout << e.w << " " << e.x << " " << e.y << " " << e.z << endl;
		cout << f.x << " " << f.y << " " << f.z << endl;
		cout << endl;
	}
	return 0;
}