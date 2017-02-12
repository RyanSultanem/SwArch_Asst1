#include "TAMultiply.h"



TAMultiply::TAMultiply(TA* in1, TA* in2)
{
	checkAndSet(in1, in2, false);
	name = "*";
}


TAMultiply::~TAMultiply()
{
}

const char * TAMultiply::getType()
{
	return first->getType();
}

void TAMultiply::printState()
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

void TAMultiply::evaluate()
{
	delete value;

	if (first->getType() == typeid(int).name())
	{
		int temp = *(int*)first->getValuePointer() * *(int*)second->getValuePointer();
		value = new int(temp);
	}
	else
	{
		double temp = *(double*)first->getValuePointer() * *(double*)second->getValuePointer();
		value = new double(temp);
	}

	isEvaluated = true;
}