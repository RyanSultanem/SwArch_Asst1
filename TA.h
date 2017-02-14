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

public:
	TA();

	virtual const char* getType();
	virtual void list();

};

