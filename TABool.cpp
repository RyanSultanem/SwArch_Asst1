#include "TABool.h"



TABool::TABool(string name) : TAPrimitiveTypes()
{
	this->name = name;
	value = new bool();
}


TABool::~TABool()
{
}

const char * TABool::getType()
{
	return typeid(bool).name();
}

void TABool::set(bool x)
{
	isValueSet = true;
	delete value;
	value = new bool(x);
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

bool TABool::getValue()
{
	return *(bool*)value;
}
