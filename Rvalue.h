#pragma once
#ifndef RVALUE_H
#define RVALUE_H
#include <iostream>

#include "Uvalue.h"

class Ivalue;

class Rvalue
{
public:
	explicit Rvalue(double);
	double get_value() const { return val_; }
	Rvalue operator+(Rvalue& rvalue) const;
	Rvalue operator*(Rvalue& rvalue) const;
	Rvalue operator%(Rvalue& rvalue) const;
	Uvalue operator*(const Ivalue& ivalue) const;
	friend std::ostream& operator<< (std::ostream& out, const Rvalue& rvalue);
private:
	double val_;
	const std::string short_name_ = "Îì";
};
#endif