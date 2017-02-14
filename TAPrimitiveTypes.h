#pragma once
#include "TAData.h"
class TAPrimitiveTypes : public TAData
{
protected:
	bool isValueSet;

public:
	TAPrimitiveTypes();
	~TAPrimitiveTypes();

	virtual void set();
};

