#include <iostream>
#include "Ivalue.h"
#include "Rvalue.h"
#include "Tvalue.h"

Ivalue::Ivalue(const double value)
{
	val_ = value;
}

Uvalue Ivalue::operator*(const Rvalue& rvalue) const
{
	return Uvalue(val_ * rvalue.get_value());
}

Qvalue Ivalue::operator*(const Tvalue& tvalue) const
{
	return Qvalue(val_ * tvalue.get_value());
}

std::ostream& operator<<(std::ostream& out, const Ivalue& ivalue)
{
	out << ivalue.val_ << " " << ivalue.short_name_;
	return out;
}
