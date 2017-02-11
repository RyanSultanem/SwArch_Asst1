#include "TAEqual.h"



TAEqual::TAEqual(TA* in1, TA* in2)
{
	checkAndSet(in1, in2, false);
	name = "=";
}


TAEqual::~TAEqual()
{
}

const char * TAEqual::getType()
{
	return first->getType();
}
