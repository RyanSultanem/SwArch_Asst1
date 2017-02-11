#include "TAMinus.h"



TAMinus::TAMinus(TA* in)
{
	checkAndSet(in, false);
	name = "-";
}


TAMinus::~TAMinus()
{
}

const char * TAMinus::getType()
{
	return first->getType();
}
