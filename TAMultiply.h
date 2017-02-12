#pragma once
#include "TAOperatorsBinary.h"
class TAMultiply :
	public TAOperatorsBinary
{
public:
	TAMultiply(TA* in1, TA* in2);
	~TAMultiply();

	const char* getType() override;
	void printState() override;
	void evaluate() override;
};

