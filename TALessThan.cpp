#include "TALessThan.h"



TALessThan::TALessThan(TA* in1, TA* in2)
{
	checkAndSet(in1, in2, false);
	name = "<";
}


TALessThan::~TALessThan()
{
}

const char * TALessThan::getType()
{
	return typeid(bool).name();
}