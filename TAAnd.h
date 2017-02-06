#pragma once
#include "TAOperatorsBinary.h"
class TAAnd : public TAOperatorsBinary
{
public:
	TAAnd(TA* in1, TA* in2);
	~TAAnd();

	const char* getType() override;
};

