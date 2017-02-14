#pragma once
#include "TAOperatorsBinary.h"
class TADivide :
	public TAOperatorsBinary
{
public:
	TADivide(TAData* in1, TAData* in2);
	~TADivide();

	const char* getType() override;
	void printState() override;
	void evaluate() override;
};

