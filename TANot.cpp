#include "TANot.h"



TANot::TANot(TA* in)
{
	checkAndSet(in, true);
	name = "not";
}


TANot::~TANot()
{
}

const char * TANot::getType()
{
	return typeid(bool).name();
}
