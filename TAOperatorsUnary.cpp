#include "TAOperatorsUnary.h"



void TAOperatorsUnary::checkAndSet(TA* in, bool isBoolean)
{
	if ((in->getType() == typeid(bool).name() && isBoolean) || (in->getType() != typeid(bool).name() && !isBoolean))
	{
		first = in;
	}
	else
	{
		throw invalid_argument("Error Incompatible types.\n");
		//cout << "Error Incompatible types.\n";
	}
}

TAOperatorsUnary::TAOperatorsUnary()
{
}


TAOperatorsUnary::~TAOperatorsUnary()
{
}

void TAOperatorsUnary::list()
{
	cout << "(" << name << " ";
	first->list();
	cout << " )";
}
