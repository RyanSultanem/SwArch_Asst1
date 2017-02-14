#pragma once
#include "TAOperatorsBinary.h"
class TAXor :
	public TAOperatorsBinary
{
public:
	TAXor(TAData* in1, TAData* in2);
	~TAXor();

	const char* getType() override;
	void printState() override;
	void evaluate() override;
};

