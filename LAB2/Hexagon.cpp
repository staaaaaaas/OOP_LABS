#include "Hexagon.h"
#include <iostream>
#include <cmath>

Hexagon::Hexagon() : Hexagon(0, 0) {
}

Hexagon::Hexagon(size_t i, size_t r) : side_a(i), R(r) {
	std::cout << "Hexagon created: " << side_a << ", " << R << std::endl;
}

Hexagon::Hexagon(const Hexagon& orig) {
	std::cout << "Hexagon copy created" << std::endl;
	side_a = orig.side_a;
	R = orig.R;
}

Hexagon& Hexagon::operator=(const Hexagon& right) {
	if (this == &right) {
		return *this;
	}
	std::cout << "Hexagon copied" << std::endl;
	side_a = right.side_a;
	R = right.R;
	return *this;
}


Hexagon& Hexagon::operator++() {
	side_a++;
	R++;
	return *this;
}

Hexagon operator+(const Hexagon& left, const Hexagon& right) {
	return Hexagon(left.side_a + right.side_a, left.R + right.R);
}


Hexagon::~Hexagon() {
	std::cout << "Hexagon deleted" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Hexagon& obj) {
	os << "a = b = c = d = e = f =" << obj.side_a << ", R=" << obj.R << std::endl;
	return os;
}

std::istream& operator>>(std::istream& is, Hexagon& obj) {
	std::cout << "Enter the side and R" << std::endl;
	is >> obj.side_a;
	is >> obj.R;
	std::cout << obj;
	return is;
}