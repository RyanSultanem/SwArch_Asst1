#include "TAMinus.h"



TAMinus::TAMinus(TA* in)
{
	checkAndSet(in, false);
	name = "-";
}


TAMinus::~TAMinus()
{
}

const char * TAMinus::getType()
{
	return first->getType();
}

void TAMinus::printState()
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

void TAMinus::evaluate()
{
	delete value;

	if (first->getType() == typeid(int).name())
	{
		int temp = -(*(int*)first->getValuePointer());
		value = new int(temp);
	}
	else
	{
		double temp = - *(double*)first->getValuePointer();
		value = new double(temp);
	}

	isEvaluated = true;
}