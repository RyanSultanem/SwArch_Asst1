#pragma once
#include "TAOperators.h"
class TAOperatorsBinary : public TAOperators
{
protected:
	TA* second;

	void checkAndSet(TA* in1, TA* in2, bool needBoolean);

public:
	TAOperatorsBinary();
	void list() override;
};

