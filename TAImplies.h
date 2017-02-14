#pragma once
#include "TAOperatorsBinary.h"
class TAImplies :
	public TAOperatorsBinary
{
public:
	TAImplies(TAData* in1, TAData* in2);
	~TAImplies();

	const char* getType() override;
	void printState() override;
	void evaluate() override;
};

