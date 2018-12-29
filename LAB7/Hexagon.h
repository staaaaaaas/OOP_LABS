#ifndef HEXAGON_H
#define	HEXAGON_H

#include <iostream>
#include <cstring>
#include <memory>
#include "Figure.h"

class Hexagon : public Figure {
private:
	size_t side_a;
	size_t R;
public:
	Hexagon();
	Hexagon(std::istream &);
	Hexagon(double, double);
	Hexagon(const Hexagon &);

	double Square() override;
	void Print() override;
	int getType() { return 2; }

	virtual ~Hexagon() {}
};

#endif 