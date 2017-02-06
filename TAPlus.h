#pragma once
#include "TAOperatorsBinary.h"
class TAPlus :
	public TAOperatorsBinary
{
public:
	TAPlus(TA* in1, TA* in2);
	~TAPlus();

	const char* getType() override;
};

