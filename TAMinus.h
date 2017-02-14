#pragma once
#include "TAOperatorsUnary.h"
class TAMinus : public TAOperatorsUnary
{
public:
	TAMinus(TAData* in);
	~TAMinus();

	const char* getType() override;
	void printState() override;
	void evaluate() override;
};

