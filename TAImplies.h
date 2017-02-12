#pragma once
#include "TAOperatorsBinary.h"
class TAImplies :
	public TAOperatorsBinary
{
public:
	TAImplies(TA* in1, TA* in2);
	~TAImplies();

	const char* getType() override;
	void printState() override;
	void evaluate() override;
};

