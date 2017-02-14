#pragma once
#include "TAOperatorsBinary.h"
class TALessThan :
	public TAOperatorsBinary
{
public:
	TALessThan(TAData* in1, TAData* in2);
	~TALessThan();
	
	const char* getType() override;
	void printState() override;
	void evaluate() override;
};

