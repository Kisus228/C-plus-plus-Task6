#pragma once
#ifndef UVALUE_H
#define UVALUE_H
#include <iostream>

#include "Ivalue.h"

class Uvalue
{
public:
	explicit Uvalue(double);
	double get_value() const { return val_; }
	Ivalue operator/(const Rvalue& rvalue) const;
	Rvalue operator/(const Ivalue& ivalue) const;
	friend std::ostream& operator<< (std::ostream& out, const Uvalue& uvalue);
private:
	double val_;
	const std::string short_name_ = "Â";
};
#endif