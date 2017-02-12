#pragma once
#include "TAOperatorsBinary.h"
class TAAnd : public TAOperatorsBinary
{
private:

public:
	TAAnd(TA* in1, TA* in2);
	~TAAnd();

	const char* getType() override;
	void printState() override;
	void evaluate() override;

};

