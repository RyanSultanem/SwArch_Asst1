#pragma once
#include "TAOperatorsBinary.h"
class TAMoreThan :
	public TAOperatorsBinary
{
public:
	TAMoreThan(TA* in1, TA* in2);
	~TAMoreThan();

	const char* getType() override;
};

