#include "GTAQuat.hpp"
#include <glm/glm.hpp>
#include <glm/ext/scalar_constants.hpp>

using glm::degrees;
using glm::clamp;

GTAQuat::GTAQuat() : w(1), x(0), y(0), z(0)
{
}

GTAQuat::GTAQuat(float x, float y, float z) : GTAQuat(vec3(x, y, z))
{
}

GTAQuat::GTAQuat(vec3 degrees)
{
	vec3 radians = glm::radians(degrees);
	vec3 c = cos(radians * -0.5f);
	vec3 s = sin(radians * -0.5f);

	w = c.x * c.y * c.z + s.x * s.y * s.z;
	x = c.x * s.y * s.z + s.x * c.y * c.z;
	y = c.x * s.y * c.z - s.x * c.y * s.z;
	z = c.x * c.y * s.z - s.x * s.y * c.z;
}

vec3 GTAQuat::ToEuler() const
{
	// float epsilon = 0.00000202655792236328125f;
	float epsilon = glm::epsilon<float>();
	float temp = 2 * y * z - 2 * x * w;

	float rx, ry, rz;

	if (temp >= 1.0f - epsilon)
	{
		rx = 90.0f;
		ry = -degrees(atan2(clamp(y, -1.0f, 1.0f), clamp(w, -1.0f, 1.0f)));
		rz = -degrees(atan2(clamp(z, -1.0f, 1.0f), clamp(w, -1.0f, 1.0f)));
	}
	else if (-temp >= 1.0f - epsilon)
	{
		rx = -90.0f;
		ry = -degrees(atan2(clamp(y, -1.0f, 1.0f), clamp(w, -1.0f, 1.0f)));
		rz = -degrees(atan2(clamp(z, -1.0f, 1.0f), clamp(w, -1.0f, 1.0f)));
	}
	else
	{
		rx = degrees(asin(clamp(temp, -1.0f, 1.0f)));
		ry = -degrees(atan2(clamp(x * z + y * w, -1.0f, 1.0f), clamp(0.5f - x * x - y * y, -1.0f, 1.0f)));
		rz = -degrees(atan2(clamp(x * y + z * w, -1.0f, 1.0f), clamp(0.5f - x * x - z * z, -1.0f, 1.0f)));
	}

	// Keep each component in the [0.0f, 360.0f[ interval
	// return vec3(rx, ry, rz);
	return mod(vec3(rx, ry, rz), 360.0f);
}