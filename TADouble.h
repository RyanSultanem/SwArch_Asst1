#pragma once
#include "TAArithmetic.h"
class TADouble : public TAArithmetic
{
private:
	double value;

public:
	TADouble();
	~TADouble();

	const char* getType() override;
};

