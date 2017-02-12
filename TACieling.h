#pragma once
#include "TAOperatorsUnary.h"
class TACieling : public TAOperatorsUnary
{
public:
	TACieling(TA* in);
	~TACieling();

	const char* getType() override;
	void printState() override;
	void evaluate() override;
};

