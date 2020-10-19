#pragma once
#include "Cvalue.h"
#include "Uvalue.h"
class Qvalue
{
public:
	explicit Qvalue(double);
	double get_value() const { return val_; }
	Cvalue operator/(Uvalue*) const;
private:
	double val_;
};

