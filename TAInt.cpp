#include "TAInt.h"



TAInt::TAInt()
{

}


TAInt::~TAInt()
{
}

const char * TAInt::getType()
{
	return typeid(value).name();
}
