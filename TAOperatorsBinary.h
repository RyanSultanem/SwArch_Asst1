#pragma once
#include "TAOperators.h"
class TAOperatorsBinary : public TAOperators
{
protected:
	TAData* second;

	void checkAndSet(TAData* in1, TAData* in2, bool needBoolean);

public:
	TAOperatorsBinary();
	void list() override;
};

