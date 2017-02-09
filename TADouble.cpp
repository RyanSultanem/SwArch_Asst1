#include "TADouble.h"



TADouble::TADouble(string name) : TAArithmetic()
{
	this->name = name;
}


TADouble::~TADouble()
{
}

const char * TADouble::getType()
{
	return typeid(value).name();
}

void TADouble::set(double x)
{
	isValueSet = true;
	value = x;
}

void TADouble::evaluate()
{
	if (isValueSet)
	{
		cout << "Value of " << name << " is: " << value << endl;
	}
	else
	{
		cout << "Value not set yet." << endl;
	}
}

void TADouble::list()
{
	cout << name;
}
