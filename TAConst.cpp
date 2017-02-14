#include "TAConst.h"



TAConst::TAConst(int x)
{
	value = new int(x);
	isConst = true;
	isValueSet = true;
}


TAConst::~TAConst()
{
}

int TAConst::getValue()
{
	return *(int*)value;
}
