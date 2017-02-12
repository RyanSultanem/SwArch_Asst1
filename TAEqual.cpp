#include "TAEqual.h"



TAEqual::TAEqual(TA* in1, TA* in2)
{
	checkAndSet(in1, in2, false);
	name = "=";
}


TAEqual::~TAEqual()
{
}

const char * TAEqual::getType()
{
	return typeid(bool).name();
}

void TAEqual::printState()
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

void TAEqual::evaluate()
{
	delete value;

	bool temp;
		
	if (first->getType() == typeid(int).name())
	{
		temp = (*(int*)first->getValuePointer() == *(int*)second->getValuePointer());
	}
	else
	{
		temp = (*(double*)first->getValuePointer() == *(double*)second->getValuePointer());
	}

	value = new bool(temp);

	isEvaluated = true;
}
