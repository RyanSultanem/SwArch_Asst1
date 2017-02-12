#include "TAAnd.h"



TAAnd::TAAnd(TA* in1, TA* in2)
{
	checkAndSet(in1, in2, true);
	name = "&";
}


TAAnd::~TAAnd()
{
}

const char * TAAnd::getType()
{
	return typeid(bool).name();
}

void TAAnd::printState()
{
	cout << value << endl;
}

void TAAnd::evaluate()
{

}

