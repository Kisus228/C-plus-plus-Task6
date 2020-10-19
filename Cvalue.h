#pragma once
class Cvalue
{
public:
	explicit Cvalue(double);
	double get_value() const { return val_; }
	Cvalue operator+(Cvalue*) const;
	Cvalue operator*(Cvalue*) const;
	Cvalue operator%(Cvalue*) const;
private:
	double val_;
};

