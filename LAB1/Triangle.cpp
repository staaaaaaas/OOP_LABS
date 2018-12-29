#include "Triangle.h"
#include <iostream>
#include <cmath>


Triangle::Triangle() : Triangle(0, 0, 0) {
}

Triangle::Triangle(size_t i, size_t j, size_t k) : side_a(i), side_b(j), side_c(k){
	std::cout << "Hexagon created: " << side_a << ", " << side_b << ", " << side_c << std::endl;
}

Triangle::Triangle(std::istream &is) {
	std::cout << "Enter the sides Triangle" << std::endl;
	is >> side_a;
	is >> side_b;
	is >> side_c;
}

double Triangle::Square() {
	std::cout << "Triangle sqaure:" << std::endl;
	double p = double(side_a + side_b + side_c) / 2.0;
	return sqrt(p * (p - double(side_a))*(p - double(side_b))*(p - double(side_c)));

}

void Triangle::Print() {
	std::cout << "Triangle:" << std::endl;
	std::cout << "a=" << side_a << ", b=" << side_b << ", c=" << side_c << std::endl;

}

Triangle::~Triangle() {
	std::cout << "Triangle deleted" << std::endl;
}
