#include "Tvalue.h"

Tvalue::Tvalue(const double value)
{
	val_ = value;
}

Qvalue Tvalue::operator*(Ivalue* ivalue) const
{
	return Qvalue(this->val_ * ivalue->get_value());
}
