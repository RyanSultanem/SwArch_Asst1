#include "TAXor.h"



TAXor::TAXor(TA* in1, TA* in2)
{
	checkAndSet(in1, in2, true);
}


TAXor::~TAXor()
{
}

const char * TAXor::getType()
{
	return typeid(bool).name();
}