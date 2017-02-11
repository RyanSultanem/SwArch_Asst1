#include "TAMinusBinary.h"



TAMinusBinary::TAMinusBinary(TA* in1, TA* in2)
{
	checkAndSet(in1, in2, false);
	name = "-";
}


TAMinusBinary::~TAMinusBinary()
{
}

const char * TAMinusBinary::getType()
{
	return first->getType();
}