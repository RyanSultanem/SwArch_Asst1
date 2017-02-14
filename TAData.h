#pragma once
#include "TA.h"
class TAData :
	public TA
{
protected:
	void* value;

public:
	TAData();
	~TAData();

	virtual void evaluate();
	virtual void printState();
	virtual void* getValuePointer();
};

