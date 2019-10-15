#include "Main.h"

int main() {
	BMVector2 v(2.f, 0.f);
	BMVector2 p(7.f, -3.f);

	std::cout << "v(" << v.x << ", " << v.y << ")\n";
	std::cout << "v length: " << v.Magnitude() << "\n\n";
	std::cout << "p(" << p.x << ", " << p.y << ")\n";
	std::cout << "p length: " << p.Magnitude() << "\n\n";

	BMVector2 s;
	BMVector2 f;
	s = v - 2;
	f = p + v;

	std::cout << "s(" << s.x << ", " << s.y << ")\n";
	std::cout << "f(" << f.x << ", " << f.y << ")\n\n";

	v.Normalize();
	p.Normalize();

	std::cout << "v(" << v.x << ", " << v.y << ")\n";
	std::cout << "v length: " << v.Magnitude() << "\n\n";
	std::cout << "p(" << p.x << ", " << p.y << ")\n";
	std::cout << "p length: " << p.Magnitude() << "\n\n";

	return 0;
}