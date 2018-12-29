#include "Hexagon.h"
#include <iostream>
#include <cmath>
#include "Figure.h"

#include <cmath>

Hexagon::Hexagon() : side_a(0), R(0) {
}

Hexagon::Hexagon(double a, double r) : side_a(a), R(r) {
	
}

Hexagon::Hexagon(std::istream &is) {
	is >> side_a >> R;
}

Hexagon::Hexagon(const Hexagon &orig) {
	side_a = orig.side_a;
	R = orig.R;
	std::cout << "Hexagon copy created" << std::endl;
}

void Hexagon::Print() {
	std::cout << "Sides and Rad of Hexagon: " << side_a << ", " << R <<  std::endl;
	std::cout << "Square = " << Square() << std::endl;
}

double Hexagon::Square() {
	return (3 * sqrt(3) * side_a * side_a) / 2.0;
}

