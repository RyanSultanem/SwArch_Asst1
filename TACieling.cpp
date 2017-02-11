#include "TACieling.h"



TACieling::TACieling(TA* in)
{
	checkAndSet(in, false);
	name = "cieling";
}


TACieling::~TACieling()
{
}

const char * TACieling::getType()
{
	return typeid(int).name();
}
