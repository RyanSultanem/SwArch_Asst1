#pragma once
#include "TAData.h"
class TAOperators : public TAData
{
protected:
	bool isEvaluated;

public:
	TAOperators();
	TAData* first;
};

