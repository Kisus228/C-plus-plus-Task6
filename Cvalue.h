#pragma once
#ifndef CVALUE_H
#define CVALUE_H
#include <string>

class Cvalue
{
public:
	explicit Cvalue(double);
	double get_value() const { return val_; }
	Cvalue operator+(Cvalue& cvalue) const;
	Cvalue operator*(Cvalue& cvalue) const;
	Cvalue operator%(Cvalue& cvalue) const;
	friend std::ostream& operator<< (std::ostream&, const Cvalue&);
private:
	double val_;
	const std::string short_name_ = "Ô";
};
#endif


