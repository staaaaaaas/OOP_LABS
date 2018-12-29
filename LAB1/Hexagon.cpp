#include "Hexagon.h"
#include <iostream>
#include <cmath>


Hexagon::Hexagon() : Hexagon(0, 0) {
}

Hexagon::Hexagon(size_t i, size_t r) : side_a(i), R(r) {
	std::cout << "Hexagon created: " << side_a << ", " << R << std::endl;
}

Hexagon::Hexagon(std::istream& is) {
	std::cout << "Enter the side and radius of Hexagon" << std::endl;
	is >> side_a;
	is >> R;
}

double Hexagon::Square() {
	std::cout << "Hexagon sqaure:" << std::endl;
	return (3*sqrt(3)*pow(double (side_a),2))/2 ;
}

void Hexagon::Print() {
	std::cout << "Hexagon:" << std::endl;
	std::cout << "a = b = c = d =e = f = " << side_a << ", R=" << R << std::endl;

}

Hexagon::~Hexagon() {
	std::cout << "Hexagon deleted" << std::endl;
}