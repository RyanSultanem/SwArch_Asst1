#pragma once
#include "TAOperatorsBinary.h"
class TAXor :
	public TAOperatorsBinary
{
public:
	TAXor(TA* in1, TA* in2);
	~TAXor();

	const char* getType() override;
	void printState() override;
	void evaluate() override;
};

