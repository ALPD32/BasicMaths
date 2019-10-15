#ifndef BASIC_MATHS_VECTOR_H
#define BASIC_MATHS_VECTOR_H

#include "Include.h"

class BMVector2 {
public:
	inline BMVector2() { x = 0.f; y = 0.f; };
	inline BMVector2(float ax, float ay) { x = ax; y = ay; };
	
	float Magnitude() const;
	float MagnitudeSquared() const;
	void Normalize();

	float x, y;
};

#endif // BASIC_MATHS_VECTOR_H
