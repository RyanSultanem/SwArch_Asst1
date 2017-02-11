#include "TAPlus.h"



TAPlus::TAPlus(TA* in1, TA* in2)
{
	checkAndSet(in1, in2, false);
	name = "+";
}

TAPlus::~TAPlus()
{
}

const char * TAPlus::getType()
{
	return first->getType();
}