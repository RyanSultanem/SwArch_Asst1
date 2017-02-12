#pragma once
#include "TA.h"
class TAOperators : public TA
{
protected:
	bool isEvaluated;

public:
	TAOperators();
	TA* first;
};

