#include "TAXor.h"



TAXor::TAXor(TAData* in1, TAData* in2)
{
	checkAndSet(in1, in2, true);
	name = "xor";
}


TAXor::~TAXor()
{
}

const char * TAXor::getType()
{
	return typeid(bool).name();
}

void TAXor::printState()
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

void TAXor::evaluate()
{
	delete value;

	bool temp = *(bool*)first->getValuePointer() ^ *(bool*)second->getValuePointer();

	value = new bool(temp);

	isEvaluated = true;
}