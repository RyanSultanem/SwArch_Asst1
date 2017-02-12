#pragma once
#include "TAOperatorsBinary.h"
class TAOr :
	public TAOperatorsBinary
{
public:
	TAOr(TA* in1, TA* in2);
	~TAOr();

	const char* getType() override;
	void printState() override;
	void evaluate() override;
};

