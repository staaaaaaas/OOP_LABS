#include "Octagon.h"
#include <iostream>
#include <cmath>


Octagon::Octagon() : Octagon(0, 0) {
}

Octagon::Octagon(size_t i, size_t r) : side_a(i), R(r) {
	std::cout << "Octagon created: " << side_a << ", " << R << std::endl;
}

Octagon::Octagon(std::istream& is) {
	std::cout << "Enter the side and radius of Octagon" << std::endl;
	is >> side_a;
	is >> R;
}

double Octagon::Square() {
	std::cout << "Octagon sqaure:" << std::endl;
	return 2*pow(double(side_a), 2)*(1 + sqrt(2));
}

void Octagon::Print() {
	std::cout << "Octagon:" << std::endl;
	std::cout << "a = b = c = d = e = f = g = h = " << side_a << ", R=" << R << std::endl;
}

Octagon::~Octagon() {
	std::cout << "Octagon deleted" << std::endl;
}