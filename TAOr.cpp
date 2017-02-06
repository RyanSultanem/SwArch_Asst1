#include "TAOr.h"



TAOr::TAOr(TA* in1, TA* in2)
{
	checkAndSet(in1, in2, true);
}


TAOr::~TAOr()
{
}

const char * TAOr::getType()
{
	return typeid(bool).name();
}
