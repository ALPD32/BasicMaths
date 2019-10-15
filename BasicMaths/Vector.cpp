#include "Vector.h"

float BMVector2::Magnitude() const {
	return sqrt(x * x + y * y);
}

float BMVector2::MagnitudeSquared() const {
	return x * x + y * y;
}

void BMVector2::Normalize() {
	float Length = Magnitude();
	x /= Length;
	y /= Length;
}