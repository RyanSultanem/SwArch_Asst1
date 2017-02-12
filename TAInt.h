#pragma once
#include "TAArithmetic.h"
class TAInt : public TAArithmetic
{
private:

public:
	TAInt(string name);
	~TAInt();

	const char* getType() override;
	void set(int x);
	void evaluate() override;
	void list() override;

	int getValue();
};

