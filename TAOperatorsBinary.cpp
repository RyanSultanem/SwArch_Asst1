#include "TAOperatorsBinary.h"



void TAOperatorsBinary::checkAndSet(TA* in1, TA* in2, bool isBoolean)
{
	if ((in1->getType() == typeid(bool).name() && in2->getType() == typeid(bool).name() && isBoolean) || (in1->getType() != typeid(bool).name() && in2->getType() != typeid(bool).name() && !isBoolean))
	{
		first = in1;
		second = in2;
	}
	else
	{
		throw invalid_argument("Error Incompatible types.\n");
		//cout << "Error Incompatible types.\n";
	}
}

TAOperatorsBinary::TAOperatorsBinary() : TAOperators()
{
}

void TAOperatorsBinary::list()
{
	cout << "(" << name << " ";
	first->list();
	cout << " ";
	second->list();
	cout << " )";
}
