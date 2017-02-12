#pragma once
#include "TAOperatorsUnary.h"
class TAMinus : public TAOperatorsUnary
{
public:
	TAMinus(TA* in);
	~TAMinus();

	const char* getType() override;
	void printState() override;
	void evaluate() override;
};

