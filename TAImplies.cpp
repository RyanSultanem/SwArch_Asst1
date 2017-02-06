#include "TAImplies.h"



TAImplies::TAImplies(TA* in1, TA* in2)
{
	checkAndSet(in1, in2, true);
}


TAImplies::~TAImplies()
{
}

const char * TAImplies::getType()
{
	return typeid(bool).name();
}