#pragma once
#include "TAOperatorsUnary.h"
class TANot : public TAOperatorsUnary
{

public:
	TANot(TAData* in);
	~TANot();

	const char* getType() override;
	void printState() override;
	void evaluate() override;
};

