#pragma once
#include "Ivalue.h"
#include "Uvalue.h"
class Rvalue
{
public:
	explicit Rvalue(double);
	double get_value() const { return val_; }
	Uvalue operator*(Ivalue*) const;
	Rvalue operator+(Rvalue*) const;
	Rvalue operator*(Rvalue*) const;
	Rvalue operator%(Rvalue*) const;
private:
	double val_;
};

