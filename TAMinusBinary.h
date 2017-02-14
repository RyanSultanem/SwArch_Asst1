#pragma once
#include "TAOperatorsBinary.h"
class TAMinusBinary :
	public TAOperatorsBinary
{
public:
	TAMinusBinary(TAData* in1, TAData* in2);
	~TAMinusBinary();

	const char* getType() override;
	void printState() override;
	void evaluate() override;
};

