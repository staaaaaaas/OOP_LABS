#ifndef TREMOVECRITERIASQUARE_H
#define TREMOVECRITERIASQUARE_H
#include "TRemoveCriteria.h"

template <class T>
class TRemoveCriteriaSquare : public TRemoveCriteria<T> {
private:
	double val;
public:
	TRemoveCriteriaSquare(double val) {
		this->val = val;
	}
	bool doesFit(std::shared_ptr<T> &fig) override {
		return fig->Square() <= val;
	}
};

#endif // TREMOVECRITERIASQUARE_H