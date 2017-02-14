#include "TAFloor.h"



TAFloor::TAFloor(TAData* in)
{
	checkAndSet(in, false);
	name = "floor";
}


TAFloor::~TAFloor()
{
}

const char * TAFloor::getType()
{
	return typeid(int).name();
}

void TAFloor::printState()
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

void TAFloor ::evaluate()
{
	delete value;

	int temp;
	if (first->getType() == typeid(int).name())
	{
		temp = floor(*(int*)first->getValuePointer());
	}
	else
	{
		temp = floor(*(double*)first->getValuePointer());
	}

	value = new int(temp);

	isEvaluated = true;
}