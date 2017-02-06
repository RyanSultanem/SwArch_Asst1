#include "TABool.h"



TABool::TABool()
{
	
}


TABool::~TABool()
{
}

const char * TABool::getType()
{
	return typeid(value).name();
}
