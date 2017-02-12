#include "TAInt.h"



TAInt::TAInt(string name) : TAArithmetic()
{
	this->name = name;
	value = new int();
}


TAInt::~TAInt()
{
}

const char * TAInt::getType()
{
	return typeid(value).name();
}

void TAInt::set(int x)
{
	isValueSet = true;
	delete value;
	value = new int(x);
}

void TAInt::evaluate()
{
	//Not sure what it is suppose to do
	if (isValueSet) 
	{
		cout << "Value of " << name << " is: " << value << endl;
	}
	else
	{
		cout << "Value not set yet." << endl;
	}
	
}

void TAInt::list()
{
	cout << name;
}

int TAInt::getValue()
{
	return *(int*)value;
}
