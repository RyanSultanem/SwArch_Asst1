#include "TADouble.h"



TADouble::TADouble()
{
	
}


TADouble::~TADouble()
{
}

const char * TADouble::getType()
{
	return typeid(value).name();
}
