#include <cstdlib>
#include <iostream>

#include "Hexagon.h"
#include "TStackItem.h"
#include "TStack.h"

int main(int argc, char** argv) {
	TStack stack;
	Hexagon hex1;
	Hexagon hex2;
	int choice;
	while (1) {
		std::cout << "0-Exit  1-Enter the Hexagon  2- Push Hexagon to Stack  3-Pop Hexagon from Stack  4-Print Stack" << std::endl;
		std::cin >> choice;
		if (choice == 0) {
			std::cout << "The programm has been finished" << std::endl;
			break;
		}
		if (choice == 1) {
			std::cin >> hex1;
		}
		if (choice == 2) {
			stack.push(hex1);
		}
		if (choice == 3) {
			hex2 = stack.pop();
			std::cout << hex2;
		}
		if (choice == 4) {
			std::cout << stack;
		}
	}
}
