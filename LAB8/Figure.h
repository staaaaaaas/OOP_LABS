#ifndef FIGURE_H
#define	FIGURE_H

class Figure {
public:
	virtual void Print() = 0;
	virtual double Square() = 0;
	friend std::ostream& operator<<(std::ostream& os, Figure& obj) {
		obj.Print();
		std::cout << std::endl;
		return os;
	}



	virtual ~Figure() {};
};

#endif	/* FIGURE_H */
