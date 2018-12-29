#include "TStack.h"

TStack::TStack() : head(nullptr) {
}

TStack::TStack(const TStack& orig) {
	head = orig.head;
}

std::ostream& operator<<(std::ostream& os, const TStack& stack) {
	TStackItem *item = stack.head;
	while (item != nullptr){
		os << *item;
		item = item->GetNext();
	}
	return os;
}

void TStack::push(Hexagon &hexagon) {
	TStackItem *other = new TStackItem(hexagon);
	other->SetNext(head);
	head = other;
}

bool TStack::empty() {
	return head == nullptr;
}

Hexagon TStack::pop() {
	Hexagon result;
	if (head != nullptr) {
		TStackItem *old_head = head;
		head = head->GetNext();
		result = old_head->GetHexagon();
		old_head->SetNext(nullptr);
		delete old_head;
	}
	return result;
}

TStack::~TStack() {
	delete head;
}