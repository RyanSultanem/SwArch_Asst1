#pragma once
#include "TAArithmetic.h"
class TADouble : public TAArithmetic
{
private:
	double value;

public:
	TADouble(string name);
	~TADouble();

	const char* getType() override;
	void set(double x);
	void evaluate() override;
	void list() override;
};

