#ifndef HEXAGON_H
#define	HEXAGON_H
#include <cstdlib>
#include <iostream>
#include "Figure.h"

class Hexagon : public Figure {
public:
	Hexagon();
	Hexagon(size_t i, size_t r);
	Hexagon(const Hexagon& orig);
	Hexagon(std::istream &is);

	void Print() override;
	double Square() override;

	bool operator==(const Hexagon& other);
	bool operator<(const Hexagon& other);
	bool operator>(const Hexagon& other);
	bool operator<=(const Hexagon& other);
	bool operator>=(const Hexagon& other);
	operator double() const;
	Hexagon& operator=(const Hexagon& right);

	virtual ~Hexagon();
private:
	size_t side_a;
	size_t R;
};

#endif	/* HEXAGON_H */

