#pragma once
#include "TAOperatorsBinary.h"
class TAMoreThan :
	public TAOperatorsBinary
{
public:
	TAMoreThan(TAData* in1, TAData* in2);
	~TAMoreThan();

	const char* getType() override;
	void printState() override;
	void evaluate() override;
};

