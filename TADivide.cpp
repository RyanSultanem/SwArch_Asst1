#include "TADivide.h"



TADivide::TADivide(TAData* in1, TAData* in2)
{
	checkAndSet(in1, in2, false);
	name = "/";
}


TADivide::~TADivide()
{
}

const char * TADivide::getType()
{
	return first->getType();
}

void TADivide::printState()
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

void TADivide::evaluate()
{
	delete value;

	if (first->getType() == typeid(int).name())
	{
		int temp = *(int*)first->getValuePointer() / *(int*)second->getValuePointer();
		value = new int(temp);
	}
	else
	{
		double temp = *(double*)first->getValuePointer() / *(double*)second->getValuePointer();
		value = new double(temp);
	}

	isEvaluated = true;
}