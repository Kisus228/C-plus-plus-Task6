#pragma once
#include "Uvalue.h"
#include "Rvalue.h"
#include "Qvalue.h"
#include "Tvalue.h"
class Ivalue
{
public:
	explicit Ivalue(double);
	double get_value() const { return val_; }
	Uvalue operator*(Rvalue*) const;
	Qvalue operator*(Tvalue*) const;
private:
	double val_;
};

