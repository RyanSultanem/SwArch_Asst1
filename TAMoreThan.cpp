#include "TAMoreThan.h"



TAMoreThan::TAMoreThan(TA* in1, TA* in2)
{
	checkAndSet(in1, in2, false);
}

TAMoreThan::~TAMoreThan()
{
}

const char * TAMoreThan::getType()
{
	return typeid(bool).name();
}
