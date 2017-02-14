#include "TAPair.h"



TAPair::TAPair(TA* first, TA* second)
{
	firstElement = first;
	secondElement = second;
}


TAPair::~TAPair()
{
}

TA * TAPair::first()
{
	return secondElement;
}

TA * TAPair::next()
{
	return firstElement;
}
