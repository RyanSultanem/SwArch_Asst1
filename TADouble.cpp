#include "TADouble.h"



TADouble::TADouble(string name) : TAArithmetic()
{
	this->name = name;
	value = new double();
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
	delete value;
	value = new double(x);
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

double TADouble::getValue()
{
	return *(double*)value;
}
