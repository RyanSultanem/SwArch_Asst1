#pragma once
#include "TAOperators.h"
class TAOperatorsUnary : public TAOperators
{
protected:
	void checkAndSet(TA* in, bool isBoolean);

public:
	TAOperatorsUnary();
	~TAOperatorsUnary();
};

