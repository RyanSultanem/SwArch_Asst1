#include "TACieling.h"



TACieling::TACieling(TA* in)
{
	checkAndSet(in, false);
}


TACieling::~TACieling()
{
}

const char * TACieling::getType()
{
	return typeid(int).name();
}
