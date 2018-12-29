#include "Triangle.h"
#include <iostream>

Triangle::Triangle() : Triangle(0, 0, 0) {
	std::cout << "Triangle created: default" << std::endl;
}

Triangle::Triangle(size_t i, size_t j, size_t k) : side_a(i), side_b(j), side_c(k) {
	std::cout << "Triangle created: " << side_a << ", " << side_b << ", " << side_c << std::endl;
}

Triangle::Triangle(const Triangle& orig) {
	std::cout << "Triangle copy created" << std::endl;
	side_a = orig.side_a;
	side_b = orig.side_b;
	side_c = orig.side_c;
}

Triangle::Triangle(std::istream &is) {
	std::cout << "Enter the sides Triangle" << std::endl;
	is >> side_a;
	is >> side_b;
	is >> side_c;
}

Triangle& Triangle::operator=(const Triangle& right) {

	if (this == &right) return *this;

	std::cout << "Triangle copied" << std::endl;
	side_a = right.side_a;
	side_b = right.side_b;
	side_c = right.side_c;

	return *this;
}

Triangle::~Triangle() {
	std::cout << "Triangle deleted" << std::endl;
}

void Triangle::Print() {
	std::cout << "Triangle:" << std::endl;
	std::cout << "a=" << side_a << ", b=" << side_b << ", c=" << side_c << std::endl;

}
