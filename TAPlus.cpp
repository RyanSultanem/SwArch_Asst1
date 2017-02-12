#include "TAPlus.h"



TAPlus::TAPlus(TA* in1, TA* in2)
{
	checkAndSet(in1, in2, false);
	name = "+";
}

TAPlus::~TAPlus()
{
}

const char * TAPlus::getType()
{
	return first->getType();
}

void TAPlus::printState()
{
	if (isEvaluated)
	{
		if (first->getType() == typeid(int).name())
		{
			cout << *(int*)value << endl;
		}
		else
		{
			cout << *(double*)value << endl;
		}
	}
	else
	{
		cout << "Value not evaluated yet for " << name << endl;
	}
}

void TAPlus::evaluate()
{
	delete value;

	if (first->getType() == typeid(int).name())
	{
		int temp = *(int*)first->getValuePointer() + *(int*)second->getValuePointer();
		value = new int(temp);
	}
	else
	{
		double temp = *(double*)first->getValuePointer() - *(double*)second->getValuePointer();
		value = new double(temp);
	}

	isEvaluated = true;
}