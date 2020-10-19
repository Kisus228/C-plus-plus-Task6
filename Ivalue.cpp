#include "Ivalue.h"

Ivalue::Ivalue(const double value)
{
	val_ = value;
}

Uvalue Ivalue::operator*(Rvalue* rvalue) const
{
	return Uvalue(this->val_ * rvalue->get_value());
}

Qvalue Ivalue::operator*(Tvalue* tvalue) const
{
	return Qvalue(this->val_ * tvalue->get_value());
}
