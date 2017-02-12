#pragma once

#include <string>
#include <typeinfo>
#include <iostream>
#include <cmath>

using namespace std;

class TA
{
protected:
	string name;
	void* value;

public:
	TA();

	virtual const char* getType();
	virtual void list();
	virtual void evaluate();
	virtual void printState();
	virtual void* getValuePointer();
};

