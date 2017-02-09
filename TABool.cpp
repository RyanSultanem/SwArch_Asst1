#include "TABool.h"



TABool::TABool(string name) : TAPrimitiveTypes()
{
	this->name = name;
}


TABool::~TABool()
{
}

const char * TABool::getType()
{
	return typeid(value).name();
}

void TABool::set(bool x)
{
	isValueSet = true;
	value = x;
}

void TABool::evaluate()
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

void TABool::list()
{
	cout << name;
}
