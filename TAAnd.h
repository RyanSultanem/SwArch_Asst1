#pragma once
#include "TAOperatorsBinary.h"
class TAAnd : public TAOperatorsBinary
{
private:

public:
	TAAnd(TAData* in1, TAData* in2);
	~TAAnd();

	const char* getType() override;
	void printState() override;
	void evaluate() override;

};

