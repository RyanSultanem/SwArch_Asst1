#pragma once
#include "TAOperatorsBinary.h"
class TAMultiply :
	public TAOperatorsBinary
{
public:
	TAMultiply(TAData* in1, TAData* in2);
	~TAMultiply();

	const char* getType() override;
	void printState() override;
	void evaluate() override;
};

