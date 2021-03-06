#ifndef OCTAGON_H
#define	OCTAGON_H
#include <cstdlib>
#include <iostream>
#include "Figure.h"

class Octagon : public Figure {
public:
	Octagon();
	Octagon(size_t i, size_t r);
	Octagon(const Octagon& orig);
	Octagon(std::istream &is);

	void   Print() override;
	double Square() override;




	Octagon& operator=(const Octagon& right);
	bool operator==(const Octagon& other);
	bool operator<(const Octagon& other);
	bool operator>(const Octagon& other);
	bool operator<=(const Octagon& other);
	bool operator>=(const Octagon& other);
	operator double() const;

	virtual ~Octagon();
private:
	size_t side_a;
	size_t R;
};

#endif	/* OCTAGON_H */
