#pragma once
#include "TAPrimitiveTypes.h"
class TABool : public TAPrimitiveTypes
{
private:
	bool value;

public:
	TABool(string name);
	~TABool();

	const char* getType() override;
	void set(bool x);
	void evaluate() override;
	void list() override;

};

