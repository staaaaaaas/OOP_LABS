#include <cstdlib>
#include <iostream>



#include "Hexagon.h"
#include "Octagon.h"
#include "Triangle.h"
#include "TStackItem.h"
#include "TStack.h"
#include "Figure.h"
#include <random>
#include <chrono>

int main(int argc, char** argv) {

	TStack<Figure> stack;
	int n, choice;
	std::default_random_engine generator;
	std::uniform_int_distribution<int> distribution(1, 100);
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		int side1 = distribution(generator);
		int side2 = distribution(generator);
		int side3 = distribution(generator);
		int R1 = distribution(generator);
		int R2 = distribution(generator);
		stack.push(std::shared_ptr<Figure>(new Triangle(side1, side1, side1)));
		stack.push(std::shared_ptr<Figure>(new Hexagon(side2, R1)));
		stack.push(std::shared_ptr<Figure>(new Octagon(side3, R2)));
	}


	std::cout << "Sort -------------" << std::endl;

	auto start = std::chrono::high_resolution_clock::now();
	std::cout << "1-sort 2-parallel sort" << std::endl;
	std::cin >> choice;
	if (choice == 1) {
		stack.sort();
	}
	else if (choice == 2) {
		stack.sort_parallel();
	}
	else { std::cout << "Wrong input" << std::endl; }
	auto end = std::chrono::high_resolution_clock::now();
	std::cout << "Done -------------" << std::endl;
	std::cout << "Time: " << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count() << std::endl;

	std::cout << stack;


	return 0;
}