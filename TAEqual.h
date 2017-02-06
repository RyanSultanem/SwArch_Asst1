#pragma once
#include "TAOperatorsBinary.h"
class TAEqual :
	public TAOperatorsBinary
{
public:
	TAEqual(TA* in1, TA* in2);
	~TAEqual();

	const char* getType() override;
};

