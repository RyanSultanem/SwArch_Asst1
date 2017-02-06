#pragma once
#include "TAOperatorsBinary.h"
class TAMinusBinary :
	public TAOperatorsBinary
{
public:
	TAMinusBinary(TA* in1, TA* in2);
	~TAMinusBinary();

	const char* getType() override;
};

