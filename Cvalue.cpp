#include "Cvalue.h"

Cvalue::Cvalue(const double value)
{
	val_ = value;
}

Cvalue Cvalue::operator+(Cvalue* cvalue) const
{
	return Cvalue(this->val_ + cvalue->val_);
}

Cvalue Cvalue::operator*(Cvalue* cvalue) const
{
	return Cvalue(this->val_ * cvalue->val_);
}

Cvalue Cvalue::operator%(Cvalue* cvalue) const
{
	return Cvalue(this->val_ / cvalue->val_);
}
