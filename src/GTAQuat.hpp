#pragma once

#include <glm/vec3.hpp>

using glm::vec3;

// WARNING: Do not use glm::quat or glm::vec4 for quaternions instead of this class!
// The game uses a weird implementation of Euler angles and/or quaternions than almost everything you'd find.
// Special thanks to IllidanS4 and his i_quat include for the formulas used in this class.
// See this issue for more information: https://github.com/openmultiplayer/open.mp/issues/143
// See this link for an explanation of the formulas: https://math.stackexchange.com/questions/1477926/quaternion-to-euler-with-some-properties

class GTAQuat
{
public:
	GTAQuat();
	GTAQuat(double w, double x, double y, double z);
	GTAQuat(double x, double y, double z);
	GTAQuat(vec3 degrees);

	vec3 ToEuler() const;

	double w, x, y, z;
};