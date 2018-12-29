#include <cstdlib>
#include <iostream>
#include <memory>

#include "Hexagon.h"
#include "Octagon.h"
#include "Hexagon.h"
#include "TStackItem.h"
#include "TStack.h"
#include "Figure.h"
#include "TAllocationBlock.h"


void TestAllocationBlock()
{
	TAllocationBlock allocator(sizeof(int), 10);

	int *a1 = nullptr;
	int *a2 = nullptr;
	int *a3 = nullptr;
	int *a4 = nullptr;
	int *a5 = nullptr;

	a1 = (int*)allocator.allocate(); *a1 = 1; std::cout << "a1 pointer value:" << *a1 << std::endl;
	a2 = (int*)allocator.allocate(); *a2 = 2; std::cout << "a2 pointer value:" << *a2 << std::endl;
	a3 = (int*)allocator.allocate(); *a3 = 3; std::cout << "a3 pointer value:" << *a3 << std::endl;

	allocator.deallocate(a1);
	allocator.deallocate(a3);

	a4 = (int*)allocator.allocate(); *a4 = 4; std::cout << "a4 pointer value:" << *a4 << std::endl;
	a5 = (int*)allocator.allocate(); *a5 = 5; std::cout << "a5 pointer value:" << *a5 << std::endl;
	std::cout << "a1 pointer value:" << *a1 << std::endl;
	std::cout << "a2 pointer value:" << *a2 << std::endl;
	std::cout << "a3 pointer value:" << *a3 << std::endl;

	allocator.deallocate(a2);
	allocator.deallocate(a4);
	allocator.deallocate(a5);
}




int main(int argc, char** argv) {
	TStack<Figure> stack;
	int choice;
	std::cout << "0-Exit  1-PushTriangle  2-PushHexagon  3-PushOctagon" << std::endl << "4-Pop  5-PrintStack 6 - TestAllocatoinBlock" << std::endl;
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
		if (choice == 6) {
			TestAllocationBlock();
		}
	}
	return 0;
}


