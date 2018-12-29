#include "Octagon.h"
#include <iostream>
#include <cmath>
#include "Figure.h"

#include <cmath>

Octagon::Octagon() : side_a(0), R(0) {
}

Octagon::Octagon(double a, double r) : side_a(a), R(r) {

}

Octagon::Octagon(std::istream &is) {
	is >> side_a >> R;
}

Octagon::Octagon(const Octagon &orig) {
	side_a = orig.side_a;
	R = orig.R;
	std::cout << "Hexagon copy created" << std::endl;
}

void Octagon::Print() {
	std::cout << "Sides and Rad of Octagon: " << side_a << ", " << R << std::endl;
	std::cout << "Square = " << Square() << std::endl;
}

double Octagon::Square() {
	return (3 * sqrt(3) * side_a * side_a) / 2.0;
}
