#include "TStackItem.h"
#include <iostream>

TStackItem::TStackItem(const Hexagon& hexagon) {
	this->hexagon = hexagon;
	this->next = nullptr;
	std::cout << "Stack item: created" << std::endl;
}

TStackItem::TStackItem(const TStackItem& orig) {
	this->hexagon = orig.hexagon;
	this->next = orig.next;
	std::cout << "Stack item: copied" << std::endl;
}

TStackItem* TStackItem::SetNext(TStackItem* next) {
	TStackItem* old = this->next;
	this->next = next;
	return old;
}

Hexagon TStackItem::GetHexagon() const {
	return this->hexagon;
}

TStackItem* TStackItem::GetNext() {
	return this->next;
}

TStackItem::~TStackItem() {
	std::cout << "Stack item: deleted" << std::endl;
	delete next;

}

std::ostream& operator<<(std::ostream& os, const TStackItem& obj) {
	os << obj.hexagon << std::endl;
	return os;
}