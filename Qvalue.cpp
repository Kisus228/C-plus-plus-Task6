#include "Qvalue.h"

Qvalue::Qvalue(const double value)
{
	val_ = value;
}

Cvalue Qvalue::operator/(Uvalue* uvalue) const
{
	return Cvalue(this->val_ / uvalue->get_value());
}
