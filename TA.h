#pragma once

#include <string>
#include <typeinfo>
#include <iostream>

using namespace std;

class TA
{
protected:
	string name;

public:
	TA();

	virtual const char* getType();
	virtual void list();
	virtual void evaluate();
	virtual void printState();
};

