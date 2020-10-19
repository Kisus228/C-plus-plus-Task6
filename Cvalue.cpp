#include "Cvalue.h"
#include <iostream>

Cvalue::Cvalue(const double value)
{
	val_ = value;
}

Cvalue Cvalue::operator+(Cvalue& cvalue) const
{
	return Cvalue(this->val_ + cvalue.val_);
}

Cvalue Cvalue::operator*(Cvalue& cvalue) const
{
	return Cvalue(this->val_ * cvalue.val_);
}

Cvalue Cvalue::operator%(Cvalue& cvalue) const
{
	return Cvalue((this->val_ + cvalue.val_) / (this->val_ * cvalue.val_));
}

std::ostream& operator<<(std::ostream& out, const Cvalue& cvalue)
{
	out << cvalue.val_ << " " << cvalue.short_name_;
	return out;
}
