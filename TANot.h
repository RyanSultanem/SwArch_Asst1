#pragma once
#include "TAOperatorsUnary.h"
class TANot : public TAOperatorsUnary
{

public:
	TANot(TA* in);
	~TANot();

	const char* getType() override;
};

