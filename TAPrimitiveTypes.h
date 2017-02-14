#pragma once
#include "TAData.h"
class TAPrimitiveTypes : public TAData
{
protected:
	bool isValueSet;
	bool isConst;

public:
	TAPrimitiveTypes();
	~TAPrimitiveTypes();

	virtual void set();
};

