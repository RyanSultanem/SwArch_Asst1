#pragma once
#include "TAOperatorsBinary.h"
class TADivide :
	public TAOperatorsBinary
{
public:
	TADivide(TA* in1, TA* in2);
	~TADivide();

	const char* getType() override;
	void printState() override;
	void evaluate() override;
};

