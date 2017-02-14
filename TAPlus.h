#pragma once
#include "TAOperatorsBinary.h"
class TAPlus :
	public TAOperatorsBinary
{
public:
	TAPlus(TAData* in1, TAData* in2);
	~TAPlus();

	const char* getType() override;
	void printState() override;
	void evaluate() override;
};

