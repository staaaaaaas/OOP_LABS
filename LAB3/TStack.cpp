#include "TStack.h"

TStack::TStack() : head(nullptr) {
}


std::ostream& operator<<(std::ostream& os, const TStack& stack) {

	std::shared_ptr<TStackItem> item = stack.head;

	while (item != nullptr)
	{
		os << *item;
		item = item->GetNext();
	}

	return os;
}

void TStack::push(std::shared_ptr<Figure> &&figure) {
	std::shared_ptr<TStackItem> other(new TStackItem(figure));
	other->SetNext(head);
	head = other;

}


bool TStack::empty() {
	return head == nullptr;
}

std::shared_ptr<Figure> TStack::pop() {
	std::shared_ptr<Figure> result;
	if (head != nullptr) {
		result = head->GetFigure();
		head = head->GetNext();
	}

	return result;
}


TStack::~TStack() {

}