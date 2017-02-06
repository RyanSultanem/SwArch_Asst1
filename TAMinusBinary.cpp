#include "TAMinusBinary.h"



TAMinusBinary::TAMinusBinary(TA* in1, TA* in2)
{
	checkAndSet(in1, in2, false);
}


TAMinusBinary::~TAMinusBinary()
{
}

const char * TAMinusBinary::getType()
{
	return first->getType();
}