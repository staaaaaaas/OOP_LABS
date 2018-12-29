#ifndef TREMOVECRITERIAVALUE_H
#define TREMOVECRITERIAVALUE_H
#include "TRemoveCriteria.h"
#include <memory>

template <class T>
class TRemoveCriteriaType : public TRemoveCriteria<T> {
private:
	int val;
public:
	TRemoveCriteriaType(int val) {
		this->val = val;
	}

	bool doesFit(std::shared_ptr<T> &fig) override {
		return fig->getType() == val;
	}
};

#endif // TREMOVECRITERIAVALUE_H