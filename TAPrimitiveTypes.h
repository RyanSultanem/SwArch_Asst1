#pragma once
#include "TA.h"
class TAPrimitiveTypes : public TA
{
protected:
	bool isValueSet;

public:
	TAPrimitiveTypes();
	~TAPrimitiveTypes();

	virtual void set();
};

