#pragma once
#include "Ivalue.h"
#include "Qvalue.h"
class Tvalue
{
public:
	explicit Tvalue(double);
	double get_value() const { return val_; }
	Qvalue operator*(Ivalue*) const;
private:
	double val_;
};

