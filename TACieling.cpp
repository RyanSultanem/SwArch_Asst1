#include "TACieling.h"



TACieling::TACieling(TA* in) : TAOperatorsUnary()
{
	checkAndSet(in, false);
	name = "cieling";
}


TACieling::~TACieling()
{
}

const char * TACieling::getType()
{
	return typeid(int).name();
}

void TACieling::printState()
{
	if (isEvaluated)
	{
		cout << *(int*)value << endl;
	}
	else
	{
		cout << "Value not evaluated yet for " << name << endl;
	}
}

void TACieling::evaluate()
{
	delete value;
	
	int temp;
	if (first->getType() == typeid(int).name())
	{
		temp = ceil(*(int*)first->getValuePointer());
	}
	else 
	{
		temp = ceil(*(double*)first->getValuePointer());
	}

	value = new int(temp);

	isEvaluated = true;
}

