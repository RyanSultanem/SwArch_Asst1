#pragma once
#include "TAPrimitiveTypes.h"
class TABool : public TAPrimitiveTypes
{
private:
	bool value;

public:
	TABool();
	~TABool();

	const char* getType() override;
};

