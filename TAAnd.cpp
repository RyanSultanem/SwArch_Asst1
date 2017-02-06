#include "TAAnd.h"



TAAnd::TAAnd(TA* in1, TA* in2)
{
	checkAndSet(in1, in2, true);
}


TAAnd::~TAAnd()
{
}

const char * TAAnd::getType()
{
	return typeid(bool).name();
}
