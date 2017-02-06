#include "TAMinus.h"



TAMinus::TAMinus(TA* in)
{
	checkAndSet(in, false);
}


TAMinus::~TAMinus()
{
}

const char * TAMinus::getType()
{
	return first->getType();
}
