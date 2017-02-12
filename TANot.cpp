#include "TANot.h"



TANot::TANot(TA* in)
{
	checkAndSet(in, true);
	name = "not";
}


TANot::~TANot()
{
}

const char * TANot::getType()
{
	return typeid(bool).name();
}

void TANot::printState()
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

void TANot::evaluate()
{
	delete value;

	bool temp = !(*(bool*)first->getValuePointer());

	value = new bool(temp);

	isEvaluated = true;
}