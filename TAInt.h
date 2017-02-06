#pragma once
#include "TAArithmetic.h"
class TAInt : public TAArithmetic
{
private:
	int value;

public:
	TAInt();
	~TAInt();

	const char* getType() override;
};

