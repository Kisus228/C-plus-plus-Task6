#include <iostream>
#include "Uvalue.h"
#include "Rvalue.h"

Uvalue::Uvalue(const double value)
{
	val_ = value;
}

Ivalue Uvalue::operator/(const Rvalue& rvalue) const
{
	return Ivalue(val_ / rvalue.get_value());
}

Rvalue Uvalue::operator/(const Ivalue& ivalue) const
{
	return Rvalue(val_ / ivalue.get_value());
}

std::ostream& operator<<(std::ostream& out, const Uvalue& uvalue)
{
	out << uvalue.val_ << " " << uvalue.short_name_;
	return out;
}
