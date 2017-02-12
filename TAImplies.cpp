#include "TAImplies.h"



TAImplies::TAImplies(TA* in1, TA* in2)
{
	checkAndSet(in1, in2, true);
	name = "implies";
}


TAImplies::~TAImplies()
{
}

const char * TAImplies::getType()
{
	return typeid(bool).name();
}

void TAImplies::printState()
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

void TAImplies::evaluate()
{
	delete value;

	bool temp;
	
	bool p = *(bool*)first->getValuePointer();
	bool q = *(bool*)second->getValuePointer();

	temp = (p && q) || (!p);

	value = new bool(temp);

	isEvaluated = true;
}