#include "Vector.h"

float BMVector2::Magnitude() const {
	return sqrt(x * x + y * y);
}

float BMVector2::MagnitudeSquared() const {
	return x * x + y * y;
}

BMVector2 BMVector2::Normalize() const {
	float Length = Magnitude();
	BMVector2 v1;

	v1.x = x / Length;
	v1.y = y / Length;

	return v1;
}
