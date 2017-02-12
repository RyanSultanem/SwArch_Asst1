#pragma once
#include "TAOperatorsBinary.h"
class TALessThan :
	public TAOperatorsBinary
{
public:
	TALessThan(TA* in1, TA* in2);
	~TALessThan();
	
	const char* getType() override;
	void printState() override;
	void evaluate() override;
};

