#include <cstdlib>
#include <iostream>
#include <memory>

#include "Hexagon.h"
#include "Octagon.h"
#include "Hexagon.h"
#include "TStackItem.h"
#include "TStack.h"
#include "Figure.h"
#include "TIterator.h"






// template stack on shared_ptr with iterator
int main(int argc, char** argv) {
	TStack<Figure> stack;
	int choice;
	std::cout << "0-Exit  1-PushTriangle  2-PushHexagon  3-PushOctagon" << std::endl << "4-Pop  5-PrintStack" << std::endl;
	while (1) {
		std::cin >> choice;
		if (choice == 0) {
			std::cout << "The programm has been finished" << std::endl;
			break;
		}
		if (choice == 1) {
			stack.push(std::shared_ptr<Figure>(new Triangle(std::cin)));
		}
		if (choice == 2) {
			stack.push(std::shared_ptr<Figure>(new Hexagon(std::cin)));
		}
		if (choice == 3) {
			stack.push(std::shared_ptr<Figure>(new Octagon(std::cin)));
		}
		if (choice == 4) {
			std::shared_ptr<Figure> t;
			t = stack.pop(); std::cout << *t << std::endl;
		}
		if (choice == 5) {
			for (auto i : stack)  std::cout << *i << std::endl;
		}
	}
	return 0;
}
