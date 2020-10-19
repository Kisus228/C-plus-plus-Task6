#pragma once
#ifndef IVALUE_H
#define IVALUE_H
#include <iostream>


#include "Qvalue.h"

class Tvalue;
class Rvalue;
using namespace std;
class Ivalue
{
public:
	explicit Ivalue(double);
	double get_value() const { return val_; }
	Uvalue operator*(const Rvalue& rvalue) const;
	Qvalue operator*(const Tvalue& tvalue) const;
	friend std::ostream& operator<< (std::ostream& out, const Ivalue& ivalue);
private:
	double val_;
	const string short_name_ = "À";
};
#endif