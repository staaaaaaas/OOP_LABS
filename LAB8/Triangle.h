#ifndef TRIANGLE_H
#define	TRIANGLE_H
#include <cstdlib>
#include <iostream>
#include "Figure.h"

class Triangle : public Figure {
public:
	Triangle();
	Triangle(size_t i, size_t j, size_t k);
	Triangle(const Triangle& orig);
	Triangle(std::istream &is);

	void   Print() override;
	double Square() override;


	Triangle& operator=(const Triangle& right);
	bool operator==(const Triangle& other);
	bool operator<(const Triangle&& other);
	bool operator>(const Triangle&& other);
	bool operator<=(const Triangle& other);
	bool operator>=(const Triangle& other);
	operator double() const;

	

	virtual ~Triangle();
private:
	size_t side_a;
	size_t side_b;
	size_t side_c;
};

#endif	/* TRIANGLE_H */


