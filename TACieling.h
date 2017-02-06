#pragma once
#include "TAOperatorsUnary.h"
class TACieling : public TAOperatorsUnary
{
public:
	TACieling(TA* in);
	~TACieling();

	const char* getType() override;
};

