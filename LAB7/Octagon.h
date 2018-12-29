#ifndef OCTAGON_H
#define	OCTAGON_H

#include <iostream>
#include <cstring>
#include "Figure.h"

#include <memory>

class Octagon : public Figure {
private:
	size_t side_a;
	size_t R;
public:
	Octagon();
	Octagon(std::istream &);
	Octagon(double, double);
	Octagon(const Octagon &);
	double Square() override;
	void Print() override;
	int getType() { return 3; }

	virtual ~Octagon() {}
};

#endif 