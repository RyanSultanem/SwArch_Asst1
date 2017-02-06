#include "TADivide.h"



TADivide::TADivide(TA* in1, TA* in2)
{
	checkAndSet(in1, in2, false);
}


TADivide::~TADivide()
{
}

const char * TADivide::getType()
{
	return first->getType();
}
