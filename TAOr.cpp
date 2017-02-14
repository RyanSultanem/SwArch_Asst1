#include "TAOr.h"



TAOr::TAOr(TAData* in1, TAData* in2)
{
	checkAndSet(in1, in2, true);
	name = "|";
}


TAOr::~TAOr()
{
}

const char * TAOr::getType()
{
	return typeid(bool).name();
}

void TAOr::printState()
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

void TAOr::evaluate()
{
	delete value;

	bool temp = *(bool*)first->getValuePointer() || *(bool*)second->getValuePointer();

	value = new bool(temp);

	isEvaluated = true;
}