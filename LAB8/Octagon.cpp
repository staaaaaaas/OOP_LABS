#include "Octagon.h"
#include <iostream>

Octagon::Octagon() : Octagon(0, 0) {
	std::cout << "Octagon created: default" << std::endl;
}

Octagon::Octagon(size_t i, size_t r) : side_a(i), R(r) {
	std::cout << "Octagon created: " << side_a << ", " << R << std::endl;
}

Octagon::Octagon(std::istream& is) {
	std::cout << "Enter the side and radius of Octagon" << std::endl;
	is >> side_a;
	is >> R;
}

Octagon::Octagon(const Octagon& orig) {
	std::cout << "Octagon copy created" << std::endl;
	side_a = orig.side_a;
	R = orig.R;
}

Octagon& Octagon::operator=(const Octagon& right) {

	if (this == &right) return *this;

	std::cout << "Octagon copied" << std::endl;
	side_a = right.side_a;
	R = right.R;
	return *this;
}

bool Octagon::operator==(const Octagon& other) {
	return (side_a == other.side_a) && (R == other.R);
}

bool Octagon::operator<(const Octagon& other) {
	return (double)(*this) < (double)(other);
}

bool Octagon::operator>(const Octagon& other) {
	return double(*this) > double(other);
}

bool Octagon::operator<=(const Octagon& other) {
	return double(*this) <= double(other);
}

bool Octagon::operator>=(const Octagon& other) {
	return double(*this) >= double(other);
}

Octagon::operator double() const {
	return 2 * pow(double(side_a), 2)*(1 + sqrt(2));
}

Octagon::~Octagon() {
	//std::cout << "Octagon deleted" << std::endl;
}

void Octagon::Print() {
	std::cout << "Octagon:" << std::endl;
	std::cout << "a =" << side_a << ", R=" << R << std::endl;
}

double Octagon::Square() {
	//std::cout << "Octagon sqaure:" << std::endl;
	return 2 * pow(double(side_a), 2)*(1 + sqrt(2));
}
