// Areshin Stanislav 206 OOP
// VAR 31


#include <cstdlib>
#include "Triangle.h"
#include "Hexagon.h"
#include "Octagon.h"

void task (Figure *ptr) {
	ptr->Print();
	std::cout << ptr->Square() << std::endl;
	delete ptr;
}

int main(int argc, char** argv) {
	Figure *ptr;
	int choice;
	std::cout << "Enter your choice: 0-exit;  1-Hexagon;  2-Octagon;  3-Triangle" << std::endl;
	while (1) {
		std::cin >> choice;
		if (choice == 0) {
			std::cout << "The programm has been finished" << std::endl;
			break;
		}
		else if (choice == 1) {
			ptr = new Hexagon(std::cin);
		}
		else if (choice == 2) {
			ptr = new Octagon(std::cin);
		}
		else if (choice == 3) {
			 ptr = new Triangle(std::cin);
		}
		else {
			std::cout << "Wrong input" << std::endl;
			break;
		}
		task(ptr);
	}
	return 0;
}