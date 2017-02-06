#include "TAMultiply.h"



TAMultiply::TAMultiply(TA* in1, TA* in2)
{
	checkAndSet(in1, in2, false);
}


TAMultiply::~TAMultiply()
{
}

const char * TAMultiply::getType()
{
	return first->getType();
}