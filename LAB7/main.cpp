#include <iostream>
#include <memory>
#include "Triangle.h"
#include "Octagon.h"
#include "Hexagon.h"
#include "TStack.h"
#include "TArray.h"
#include "Figure.h"
#include "TRemoveCriteria.h"
#include "TRemoveCriteriaAll.h"
#include "TRemoveCriteriaType.h"
#include "TRemoveCritreiaSquare.h"

int main(int argc, char *argv[]) {
	TStack< TArray<Figure>, Figure > stack;
	int choice;
	std::cout << " 0-Exit 1-Push Triangle  2-Push Hexagon " << std::endl << "3-Push Octagon  4-Remove by Square" << std::endl
		<< "5-Remove by Type  6-Remove All  7-Print Stack" << std::endl;
	while (1) {
		std::cin >> choice;
		if (choice == 0) {
			std::cout << "The programm has been finished" << std::endl;
			break;
		}
		if (choice == 1) {
			std::cout << "Enter the Triangle" << std::endl;
			stack.insert(std::make_shared<Triangle>(std::cin));
		}
		if (choice == 2) {
			std::cout << "Enter the Hexagon" << std::endl;
			stack.insert(std::make_shared<Hexagon>(std::cin));
		}
		if (choice == 3) {
			std::cout << "Enter the Octagon" << std::endl;
			stack.insert(std::make_shared<Octagon>(std::cin));
		}
		if (choice == 4) {
			int square;
			std::cout << "Enter square:\n";
			std::cin >> square;
			TRemoveCriteriaSquare<Figure> criteria(square);
			stack.remove(&criteria);
		}
		if (choice == 5) {
			int type;
			std::cout << "Enter the Type: 1 2 3:\n";
			std::cin >> type;
			TRemoveCriteriaType<Figure> criteria(type);
			stack.remove(&criteria);
		}
		if (choice == 6) {
			TRemoveCriteriaAll<Figure> criteria;
			stack.remove(&criteria);
		}
		if (choice == 7) {
			for (auto i : stack) {
				std::cout << *i;
			}
		}
	}
	return 0;
}