#pragma once
#include "TAOperators.h"
class TAOperatorsUnary : public TAOperators
{
protected:
	void checkAndSet(TAData* in, bool isBoolean);

public:
	TAOperatorsUnary();
	~TAOperatorsUnary();

	void list() override;
};

