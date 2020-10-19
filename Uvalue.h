#pragma once
class Uvalue
{
public:
	explicit Uvalue(double);
	double get_value() const { return val_; }
private:
	double val_;
};

