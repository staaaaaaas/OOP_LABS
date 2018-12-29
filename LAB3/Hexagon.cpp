#include "Hexagon.h"
#include <iostream>

Hexagon::Hexagon() : Hexagon(0, 0) {
	std::cout << "Hexagon created: default" << std::endl;
}

Hexagon::Hexagon(std::istream& is) {
	std::cout << "Enter the side and radius of Hexagon" << std::endl;
	is >> side_a;
	is >> R;
}

Hexagon::Hexagon(size_t i, size_t r) : side_a(i), R(r){
	std::cout << "Hexagon created: " << side_a << ", " << R << std::endl;
}

Hexagon::Hexagon(const Hexagon& orig) {
	std::cout << "Hexagon copy created" << std::endl;
	side_a = orig.side_a;
	R = orig.R;
}

Hexagon& Hexagon::operator=(const Hexagon& right) {

	if (this == &right) return *this;

	std::cout << "Hexagon copied" << std::endl;
	side_a = right.side_a;
	R = right.R;
	return *this;
}

Hexagon::~Hexagon() {
	std::cout << "Hexagon deleted" << std::endl;
}

void Hexagon::Print() {
	std::cout << "Hexagon:" << std::endl;
	std::cout << "a =" << side_a << ", R=" << R << std::endl;
}