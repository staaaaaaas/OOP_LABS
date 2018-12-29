#ifndef TSTACKITEM_H
#define	TSTACKITEM_H

#include "Hexagon.h"
class TStackItem {
public:
	TStackItem(const Hexagon& hexagon);
	TStackItem(const TStackItem& orig);
	friend std::ostream& operator<<(std::ostream& os, const TStackItem& obj);

	TStackItem* SetNext(TStackItem* next);
	TStackItem* GetNext();
	Hexagon GetHexagon() const;

	virtual ~TStackItem();
private:
	Hexagon hexagon;
	TStackItem *next;
};

#endif	/* TSTACKITEM_H */