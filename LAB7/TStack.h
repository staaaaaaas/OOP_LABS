#ifndef TSTACK_H
#define TSTACK_H
#include "TStackItem.h"
#include "Hexagon.h"
#include "Octagon.h"
#include "Triangle.h"
#include "TIterator.h"
#include "TArray.h"
#include "TRemoveCriteria.h"

template <class T, class Z>
class TStack {
private:
	std::shared_ptr< TStackItem< T > > head;
	unsigned int _size;
	static const int MAX_COUNT = 5;
public:
	TStack();

	void insert(std::shared_ptr<Z> &&val);
	void remove(TRemoveCriteria<Z> *criteria);
	unsigned int size();
	bool empty();

	typedef TIterator<TStackItem<T>, T> TStackIterator;

	TStackIterator begin();
	TStackIterator end();

	template <class X, class Y>
	friend std::ostream & operator << (std::ostream &os, const TStack<X, Y> &stack);

	virtual ~TStack();
};

#endif // TSTACK_H