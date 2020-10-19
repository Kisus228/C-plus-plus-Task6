#include <iostream>
#include "Rvalue.h"
#include "Ivalue.h"

Rvalue::Rvalue(const double value)
{
	val_ = value;
}

Rvalue Rvalue::operator+(Rvalue& rvalue) const
{
	return Rvalue(this->val_ + rvalue.val_);
}

Rvalue Rvalue::operator*(Rvalue& rvalue) const
{
	return Rvalue(this->val_ * rvalue.val_);
}

Rvalue Rvalue::operator%(Rvalue& rvalue) const
{
	return Rvalue((this->val_ + rvalue.val_) / (this->val_ * rvalue.val_));
}

Uvalue Rvalue::operator*(const Ivalue& ivalue) const
{
	return Uvalue(val_ * ivalue.get_value());
}

std::ostream& operator<<(std::ostream& out, const Rvalue& rvalue)
{
	out << rvalue.val_ << " " << rvalue.short_name_;
	return out;
}
