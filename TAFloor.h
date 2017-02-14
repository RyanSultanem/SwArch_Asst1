#pragma once
#include "TAOperatorsUnary.h"
class TAFloor :
	public TAOperatorsUnary
{
public:
	TAFloor(TAData* in);
	~TAFloor();

	const char* getType() override;
	void printState() override;
	void evaluate() override;

};

