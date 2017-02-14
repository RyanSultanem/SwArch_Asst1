#include "TAAnd.h"



TAAnd::TAAnd(TAData* in1, TAData* in2) : TAOperatorsBinary()
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
	if (isEvaluated)
	{
		cout << *(bool*)value << endl;
	}
	else
	{
		cout << "Value not evaluated yet for " << name << endl;
	}
}

void TAAnd::evaluate()
{
	delete value;

	bool temp = *(bool*)first->getValuePointer() && *(bool*)second->getValuePointer();

	value = new bool(temp);
	
	isEvaluated = true;
}

