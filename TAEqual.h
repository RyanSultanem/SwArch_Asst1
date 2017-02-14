#pragma once
#include "TAOperatorsBinary.h"
class TAEqual :
	public TAOperatorsBinary
{
public:
	TAEqual(TAData* in1, TAData* in2);
	~TAEqual();

	const char* getType() override;
	void printState() override;
	void evaluate() override;
};

