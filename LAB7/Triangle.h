#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <cstdlib>
#include <iostream>
#include "Figure.h"

class Triangle : public Figure {
private:
	size_t side_a;
	size_t side_b;
	size_t side_c;
public:
	Triangle();
	Triangle(std::istream &);
	Triangle(double, double, double);
	Triangle(const Triangle &);
	int getType() { return 1; }

	bool DoesExist();
	double Square() override;
	void Print() override;

	virtual ~Triangle() {}
};

#endif // TRIANGLE_H