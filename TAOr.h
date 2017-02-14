#pragma once
#include "TAOperatorsBinary.h"
class TAOr :
	public TAOperatorsBinary
{
public:
	TAOr(TAData* in1, TAData* in2);
	~TAOr();

	const char* getType() override;
	void printState() override;
	void evaluate() override;
};

