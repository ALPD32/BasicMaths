#ifndef BASIC_MATHS_VECTOR_H
#define BASIC_MATHS_VECTOR_H

#include "Include.h"

class BMVector2 {
public:
	BMVector2() { x = 0.f; y = 0.f; };
	BMVector2(float ax, float ay) { x = ax; y = ay; };
	
	float Magnitude() const;
	float MagnitudeSquared() const;
	BMVector2 Normalize() const;

	BMVector2 operator+(const float rhs) const {
		return BMVector2(x + rhs, y + rhs);
	}

	BMVector2 operator+(const BMVector2 rhs) const {
		return BMVector2(x + rhs.x, y + rhs.y);
	}

	BMVector2 operator-(const float rhs) const {
		return BMVector2(x - rhs, y - rhs);
	}

	BMVector2 operator-(const BMVector2 rhs) const {
		return BMVector2(x - rhs.x, y - rhs.y);
	}

	float x, y;
};

#endif // BASIC_MATHS_VECTOR_H
