#pragma once
#ifndef QVALUE_H
#define QVALUE_H
#include <iostream>

#include "Cvalue.h"

class Uvalue;

class Qvalue
{
public:
	explicit Qvalue(double);
	double get_value() const { return val_; }
	Cvalue operator/(const Uvalue& uvalue) const;
	Uvalue operator/(const Cvalue& qvalue) const;
	friend std::ostream& operator<< (std::ostream& out, const Qvalue& qvalue);
private:
	double val_;
	const std::string short_name_ = "Êë";
};
#endif