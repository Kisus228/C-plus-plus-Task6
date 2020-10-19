#include "Rvalue.h"

Rvalue::Rvalue(const double value)
{
	val_ = value;
}

Uvalue Rvalue::operator*(Ivalue* ivalue) const
{
	return Uvalue(this->val_ * ivalue->get_value());
}

Rvalue Rvalue::operator+(Rvalue* rvalue) const
{
	return Rvalue(this->val_ + rvalue->val_);
}

Rvalue Rvalue::operator*(Rvalue* rvalue) const
{
	return Rvalue(this->val_ * rvalue->val_);
}

Rvalue Rvalue::operator%(Rvalue* rvalue) const
{
	return Rvalue(this->val_ / rvalue->val_);
}
