#include <iostream>
#include "Qvalue.h"
#include "Uvalue.h"

Qvalue::Qvalue(const double value)
{
	val_ = value;
}

Cvalue Qvalue::operator/(const Uvalue& uvalue) const
{
	return Cvalue(val_ / uvalue.get_value());
}

Uvalue Qvalue::operator/(const Cvalue& cvalue) const
{
	return Uvalue(val_ / cvalue.get_value());
}

std::ostream& operator<<(std::ostream& out, const Qvalue& qvalue)
{
	out << qvalue.val_ << " " << qvalue.short_name_;
	return out;
}
