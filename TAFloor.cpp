#include "TAFloor.h"



TAFloor::TAFloor(TA* in)
{
	checkAndSet(in, false);
	name = "floor";
}


TAFloor::~TAFloor()
{
}

const char * TAFloor::getType()
{
	return typeid(int).name();
}
